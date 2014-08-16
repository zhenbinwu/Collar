//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Jul 26 00:21:23 2014 by ROOT version 5.34/14
// from TTree Tree/Tree
// found on file: test3dClus_PhaseI_140PU.root
//////////////////////////////////////////////////////////

#ifndef Puppi_h
#define Puppi_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <memory>

#include "HistTool.hh"
#include "JetInfo.hh"
#include "JetPerformance.hh"

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class Puppi {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         sumet;
   Float_t         met;
   Float_t         metphi;
   Float_t         u1;
   Float_t         u2;
   Float_t         pupisumet;
   Float_t         puppimet;
   Float_t         puppimetphi;
   Float_t         puppiu1;
   Float_t         puppiu2;
   Float_t         chssumet;
   Float_t         chsmet;
   Float_t         chsmetphi;
   Float_t         chsu1;
   Float_t         chsu2;
   Float_t         index;
   Float_t         Genpt;
   Float_t         Genptcorr;
   Float_t         Genptraw;
   Float_t         Genptclean;
   Float_t         Genpttrim;
   Float_t         Genpttrimsafe;
   Float_t         Genptconst;
   Float_t         Genptunc;
   Float_t         Geneta;
   Float_t         Genphi;
   Float_t         Genm;
   Float_t         Genmraw;
   Float_t         Genmtrim;
   Float_t         Genmtrimsafe;
   Float_t         Genmclean;
   Float_t         Genmconst;
   Float_t         PFpt;
   Float_t         PFptcorr;
   Float_t         PFptraw;
   Float_t         PFptclean;
   Float_t         PFpttrim;
   Float_t         PFpttrimsafe;
   Float_t         PFptconst;
   Float_t         PFptunc;
   Float_t         PFeta;
   Float_t         PFphi;
   Float_t         PFm;
   Float_t         PFmraw;
   Float_t         PFmtrim;
   Float_t         PFmtrimsafe;
   Float_t         PFmclean;
   Float_t         PFmconst;
   Float_t         CHSpt;
   Float_t         CHSptcorr;
   Float_t         CHSptraw;
   Float_t         CHSptclean;
   Float_t         CHSpttrim;
   Float_t         CHSpttrimsafe;
   Float_t         CHSptconst;
   Float_t         CHSptunc;
   Float_t         CHSeta;
   Float_t         CHSphi;
   Float_t         CHSm;
   Float_t         CHSmraw;
   Float_t         CHSmtrim;
   Float_t         CHSmtrimsafe;
   Float_t         CHSmclean;
   Float_t         CHSmconst;
   Float_t         CHS2GeVpt;
   Float_t         CHS2GeVptcorr;
   Float_t         CHS2GeVptraw;
   Float_t         CHS2GeVptclean;
   Float_t         CHS2GeVpttrim;
   Float_t         CHS2GeVpttrimsafe;
   Float_t         CHS2GeVptconst;
   Float_t         CHS2GeVptunc;
   Float_t         CHS2GeVeta;
   Float_t         CHS2GeVphi;
   Float_t         CHS2GeVm;
   Float_t         CHS2GeVmraw;
   Float_t         CHS2GeVmtrim;
   Float_t         CHS2GeVmtrimsafe;
   Float_t         CHS2GeVmclean;
   Float_t         CHS2GeVmconst;

   // List of branches
   TBranch        *b_fSumEt;   //!
   TBranch        *b_fMet;   //!
   TBranch        *b_fMetPhi;   //!
   TBranch        *b_fU1;   //!
   TBranch        *b_fU2;   //!
   TBranch        *b_fPupSumEt;   //!
   TBranch        *b_fPupMet;   //!
   TBranch        *b_fPupMetPhi;   //!
   TBranch        *b_fPupU1;   //!
   TBranch        *b_fPupU2;   //!
   TBranch        *b_fCHSSumEt;   //!
   TBranch        *b_fCHSMet;   //!
   TBranch        *b_fCHSMetPhi;   //!
   TBranch        *b_fCHSU1;   //!
   TBranch        *b_fCHSU2;   //!
   TBranch        *b_lIndex;   //!
   TBranch        *b_Genpt;   //!
   TBranch        *b_Genptcorr;   //!
   TBranch        *b_Genptraw;   //!
   TBranch        *b_Genptclean;   //!
   TBranch        *b_Genpttrim;   //!
   TBranch        *b_Genpttrimsafe;   //!
   TBranch        *b_Genptconst;   //!
   TBranch        *b_Genptunc;   //!
   TBranch        *b_Geneta;   //!
   TBranch        *b_Genphi;   //!
   TBranch        *b_Genm;   //!
   TBranch        *b_Genmraw;   //!
   TBranch        *b_Genmtrim;   //!
   TBranch        *b_Genmtrimsafe;   //!
   TBranch        *b_Genmclean;   //!
   TBranch        *b_Genmconst;   //!
   TBranch        *b_PFpt;   //!
   TBranch        *b_PFptcorr;   //!
   TBranch        *b_PFptraw;   //!
   TBranch        *b_PFptclean;   //!
   TBranch        *b_PFpttrim;   //!
   TBranch        *b_PFpttrimsafe;   //!
   TBranch        *b_PFptconst;   //!
   TBranch        *b_PFptunc;   //!
   TBranch        *b_PFeta;   //!
   TBranch        *b_PFphi;   //!
   TBranch        *b_PFm;   //!
   TBranch        *b_PFmraw;   //!
   TBranch        *b_PFmtrim;   //!
   TBranch        *b_PFmtrimsafe;   //!
   TBranch        *b_PFmclean;   //!
   TBranch        *b_PFmconst;   //!
   TBranch        *b_CHSpt;   //!
   TBranch        *b_CHSptcorr;   //!
   TBranch        *b_CHSptraw;   //!
   TBranch        *b_CHSptclean;   //!
   TBranch        *b_CHSpttrim;   //!
   TBranch        *b_CHSpttrimsafe;   //!
   TBranch        *b_CHSptconst;   //!
   TBranch        *b_CHSptunc;   //!
   TBranch        *b_CHSeta;   //!
   TBranch        *b_CHSphi;   //!
   TBranch        *b_CHSm;   //!
   TBranch        *b_CHSmraw;   //!
   TBranch        *b_CHSmtrim;   //!
   TBranch        *b_CHSmtrimsafe;   //!
   TBranch        *b_CHSmclean;   //!
   TBranch        *b_CHSmconst;   //!
   TBranch        *b_CHS2GeVpt;   //!
   TBranch        *b_CHS2GeVptcorr;   //!
   TBranch        *b_CHS2GeVptraw;   //!
   TBranch        *b_CHS2GeVptclean;   //!
   TBranch        *b_CHS2GeVpttrim;   //!
   TBranch        *b_CHS2GeVpttrimsafe;   //!
   TBranch        *b_CHS2GeVptconst;   //!
   TBranch        *b_CHS2GeVptunc;   //!
   TBranch        *b_CHS2GeVeta;   //!
   TBranch        *b_CHS2GeVphi;   //!
   TBranch        *b_CHS2GeVm;   //!
   TBranch        *b_CHS2GeVmraw;   //!
   TBranch        *b_CHS2GeVmtrim;   //!
   TBranch        *b_CHS2GeVmtrimsafe;   //!
   TBranch        *b_CHS2GeVmclean;   //!
   TBranch        *b_CHS2GeVmconst;   //!

   Puppi(TTree *tree, std::shared_ptr<TFile> outfile_);
   virtual ~Puppi();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   bool PreLoop();
   bool PostLoop();


private:
    std::shared_ptr<TFile> outfile;
    HistTool* hist;
    JetPerformance* PFPerf;
    JetPerformance* CHSPerf;
};

#endif

#ifdef Puppi_cxx
Puppi::Puppi(TTree *tree, std::shared_ptr<TFile> outfile_) : fChain(0) , outfile(outfile_)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("test3dClus_PhaseI_140PU.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("test3dClus_PhaseI_140PU.root");
      }
      f->GetObject("Tree",tree);

   }
   Init(tree);
   hist = new HistTool(outfile, "");
   PFPerf = new JetPerformance(outfile, "PF", "pt");
   CHSPerf = new JetPerformance(outfile, "CHS", "pt");
}

Puppi::~Puppi()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Puppi::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Puppi::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Puppi::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("sumet", &sumet, &b_fSumEt);
   fChain->SetBranchAddress("met", &met, &b_fMet);
   fChain->SetBranchAddress("metphi", &metphi, &b_fMetPhi);
   fChain->SetBranchAddress("u1", &u1, &b_fU1);
   fChain->SetBranchAddress("u2", &u2, &b_fU2);
   fChain->SetBranchAddress("pupisumet", &pupisumet, &b_fPupSumEt);
   fChain->SetBranchAddress("puppimet", &puppimet, &b_fPupMet);
   fChain->SetBranchAddress("puppimetphi", &puppimetphi, &b_fPupMetPhi);
   fChain->SetBranchAddress("puppiu1", &puppiu1, &b_fPupU1);
   fChain->SetBranchAddress("puppiu2", &puppiu2, &b_fPupU2);
   fChain->SetBranchAddress("chssumet", &chssumet, &b_fCHSSumEt);
   fChain->SetBranchAddress("chsmet", &chsmet, &b_fCHSMet);
   fChain->SetBranchAddress("chsmetphi", &chsmetphi, &b_fCHSMetPhi);
   fChain->SetBranchAddress("chsu1", &chsu1, &b_fCHSU1);
   fChain->SetBranchAddress("chsu2", &chsu2, &b_fCHSU2);
   fChain->SetBranchAddress("index", &index, &b_lIndex);
   fChain->SetBranchAddress("Genpt", &Genpt, &b_Genpt);
   fChain->SetBranchAddress("Genptcorr", &Genptcorr, &b_Genptcorr);
   fChain->SetBranchAddress("Genptraw", &Genptraw, &b_Genptraw);
   fChain->SetBranchAddress("Genptclean", &Genptclean, &b_Genptclean);
   fChain->SetBranchAddress("Genpttrim", &Genpttrim, &b_Genpttrim);
   fChain->SetBranchAddress("Genpttrimsafe", &Genpttrimsafe, &b_Genpttrimsafe);
   fChain->SetBranchAddress("Genptconst", &Genptconst, &b_Genptconst);
   fChain->SetBranchAddress("Genptunc", &Genptunc, &b_Genptunc);
   fChain->SetBranchAddress("Geneta", &Geneta, &b_Geneta);
   fChain->SetBranchAddress("Genphi", &Genphi, &b_Genphi);
   fChain->SetBranchAddress("Genm", &Genm, &b_Genm);
   fChain->SetBranchAddress("Genmraw", &Genmraw, &b_Genmraw);
   fChain->SetBranchAddress("Genmtrim", &Genmtrim, &b_Genmtrim);
   fChain->SetBranchAddress("Genmtrimsafe", &Genmtrimsafe, &b_Genmtrimsafe);
   fChain->SetBranchAddress("Genmclean", &Genmclean, &b_Genmclean);
   fChain->SetBranchAddress("Genmconst", &Genmconst, &b_Genmconst);
   fChain->SetBranchAddress("PFpt", &PFpt, &b_PFpt);
   fChain->SetBranchAddress("PFptcorr", &PFptcorr, &b_PFptcorr);
   fChain->SetBranchAddress("PFptraw", &PFptraw, &b_PFptraw);
   fChain->SetBranchAddress("PFptclean", &PFptclean, &b_PFptclean);
   fChain->SetBranchAddress("PFpttrim", &PFpttrim, &b_PFpttrim);
   fChain->SetBranchAddress("PFpttrimsafe", &PFpttrimsafe, &b_PFpttrimsafe);
   fChain->SetBranchAddress("PFptconst", &PFptconst, &b_PFptconst);
   fChain->SetBranchAddress("PFptunc", &PFptunc, &b_PFptunc);
   fChain->SetBranchAddress("PFeta", &PFeta, &b_PFeta);
   fChain->SetBranchAddress("PFphi", &PFphi, &b_PFphi);
   fChain->SetBranchAddress("PFm", &PFm, &b_PFm);
   fChain->SetBranchAddress("PFmraw", &PFmraw, &b_PFmraw);
   fChain->SetBranchAddress("PFmtrim", &PFmtrim, &b_PFmtrim);
   fChain->SetBranchAddress("PFmtrimsafe", &PFmtrimsafe, &b_PFmtrimsafe);
   fChain->SetBranchAddress("PFmclean", &PFmclean, &b_PFmclean);
   fChain->SetBranchAddress("PFmconst", &PFmconst, &b_PFmconst);
   fChain->SetBranchAddress("CHSpt", &CHSpt, &b_CHSpt);
   fChain->SetBranchAddress("CHSptcorr", &CHSptcorr, &b_CHSptcorr);
   fChain->SetBranchAddress("CHSptraw", &CHSptraw, &b_CHSptraw);
   fChain->SetBranchAddress("CHSptclean", &CHSptclean, &b_CHSptclean);
   fChain->SetBranchAddress("CHSpttrim", &CHSpttrim, &b_CHSpttrim);
   fChain->SetBranchAddress("CHSpttrimsafe", &CHSpttrimsafe, &b_CHSpttrimsafe);
   fChain->SetBranchAddress("CHSptconst", &CHSptconst, &b_CHSptconst);
   fChain->SetBranchAddress("CHSptunc", &CHSptunc, &b_CHSptunc);
   fChain->SetBranchAddress("CHSeta", &CHSeta, &b_CHSeta);
   fChain->SetBranchAddress("CHSphi", &CHSphi, &b_CHSphi);
   fChain->SetBranchAddress("CHSm", &CHSm, &b_CHSm);
   fChain->SetBranchAddress("CHSmraw", &CHSmraw, &b_CHSmraw);
   fChain->SetBranchAddress("CHSmtrim", &CHSmtrim, &b_CHSmtrim);
   fChain->SetBranchAddress("CHSmtrimsafe", &CHSmtrimsafe, &b_CHSmtrimsafe);
   fChain->SetBranchAddress("CHSmclean", &CHSmclean, &b_CHSmclean);
   fChain->SetBranchAddress("CHSmconst", &CHSmconst, &b_CHSmconst);
   fChain->SetBranchAddress("CHS2GeVpt", &CHS2GeVpt, &b_CHS2GeVpt);
   fChain->SetBranchAddress("CHS2GeVptcorr", &CHS2GeVptcorr, &b_CHS2GeVptcorr);
   fChain->SetBranchAddress("CHS2GeVptraw", &CHS2GeVptraw, &b_CHS2GeVptraw);
   fChain->SetBranchAddress("CHS2GeVptclean", &CHS2GeVptclean, &b_CHS2GeVptclean);
   fChain->SetBranchAddress("CHS2GeVpttrim", &CHS2GeVpttrim, &b_CHS2GeVpttrim);
   fChain->SetBranchAddress("CHS2GeVpttrimsafe", &CHS2GeVpttrimsafe, &b_CHS2GeVpttrimsafe);
   fChain->SetBranchAddress("CHS2GeVptconst", &CHS2GeVptconst, &b_CHS2GeVptconst);
   fChain->SetBranchAddress("CHS2GeVptunc", &CHS2GeVptunc, &b_CHS2GeVptunc);
   fChain->SetBranchAddress("CHS2GeVeta", &CHS2GeVeta, &b_CHS2GeVeta);
   fChain->SetBranchAddress("CHS2GeVphi", &CHS2GeVphi, &b_CHS2GeVphi);
   fChain->SetBranchAddress("CHS2GeVm", &CHS2GeVm, &b_CHS2GeVm);
   fChain->SetBranchAddress("CHS2GeVmraw", &CHS2GeVmraw, &b_CHS2GeVmraw);
   fChain->SetBranchAddress("CHS2GeVmtrim", &CHS2GeVmtrim, &b_CHS2GeVmtrim);
   fChain->SetBranchAddress("CHS2GeVmtrimsafe", &CHS2GeVmtrimsafe, &b_CHS2GeVmtrimsafe);
   fChain->SetBranchAddress("CHS2GeVmclean", &CHS2GeVmclean, &b_CHS2GeVmclean);
   fChain->SetBranchAddress("CHS2GeVmconst", &CHS2GeVmconst, &b_CHS2GeVmconst);
   Notify();
}

Bool_t Puppi::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Puppi::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Puppi::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Puppi_cxx
