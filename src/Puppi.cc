#define Puppi_cxx
#include "Puppi.hh"
#include <iostream>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void Puppi::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L Puppi.C
//      Root > Puppi t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

//----------------------------------------------------------------------------
//  Load Jet Info
//----------------------------------------------------------------------------
      JetInfo GenJet(Genpt, Genptcorr, Genptraw, Genptclean, Genpttrim, 
          Genpttrimsafe, Genptconst, Genptunc, Geneta, Genphi, Genm, 
          Genmraw, Genmtrim, Genmtrimsafe, Genmclean, Genmconst);
      JetInfo PFJet(PFpt, PFptcorr, PFptraw, PFptclean, PFpttrim, 
          PFpttrimsafe, PFptconst, PFptunc, PFeta, PFphi, PFm, 
          PFmraw, PFmtrim, PFmtrimsafe, PFmclean, PFmconst);
      JetInfo CHSJet(CHSpt, CHSptcorr, CHSptraw, CHSptclean, CHSpttrim, 
          CHSpttrimsafe, CHSptconst, CHSptunc, CHSeta, CHSphi, CHSm, 
          CHSmraw, CHSmtrim, CHSmtrimsafe, CHSmclean, CHSmconst);

//----------------------------------------------------------------------------
//  
//----------------------------------------------------------------------------
      hist->FillTH1("JetPT", PFpt);
      PFPerf->Loop(GenJet, PFJet);
      CHSPerf->Loop(GenJet, CHSJet);

      //std::cout << index << std::endl;
      // if (Cut(ientry) < 0) continue;
   }
}

// ===  FUNCTION  ============================================================
//         Name:  Puppi::PreLoop
//  Description:  /* cursor */
// ===========================================================================
bool Puppi::PreLoop()
{
  hist->AddTH1("JetPT", "JetPT", 100, 0, 500);
  PFPerf->BookHistogram();
  CHSPerf->BookHistogram();
  return true;
}       // -----  end of function Puppi::PreLoop  -----

// ===  FUNCTION  ============================================================
//         Name:  Puppi::PostLoop
//  Description:  
// ===========================================================================
bool Puppi::PostLoop()
{
  hist->WriteTH1();
  PFPerf->WriteHistogram();
  CHSPerf->WriteHistogram();
  return true;
}       // -----  end of function Puppi::PostLoop  -----
