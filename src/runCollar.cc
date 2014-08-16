// ===========================================================================
// 
//       Filename:  main.C
// 
//    Description:  
// 
//        Version:  1.0
//        Created:  07/26/2014 12:24:23 AM
//       Compiler:  g++ -std=c++11
// 
//         Author:  Zhenbin Wu (benwu)
//          Email:  benwu@fnal.gov
//        Company:  Baylor University, CDF@FNAL, CMS@LPC
// 
// ===========================================================================

#include <cstdlib>
#include <iostream>  
#include <string>
#include <vector>
#include <memory>
#include "Puppi.hh"
#include "HistTool.hh"

#include "TChain.h"
#include "TError.h"

// ===  FUNCTION  ============================================================
//         Name:  main
//  Description:  
// ===========================================================================
int main ( int argc, char *argv[] )
{
  if (argc < 3)
  {
    std::cout << "Please enter the output and input filenames ! " <<  std::endl;
    return EXIT_FAILURE;
  }


  // Get the TChain list
  TChain *fChain = new TChain("Tree");
  for (int i = 2; i < argc; ++i)
  {
    fChain->Add(argv[i]);
  }

  // To remove the warning from TFile::Append
  // -->  Replacing existing TH1: CrossSection (Potential memory leak)
  // We need same histname for later on comparison
  gErrorIgnoreLevel = kError;

  // Initial the HistTool
  std::string name = argv[1];
  TString OutFileName;
  if (name.find(".root") == std::string::npos)
    OutFileName = name + ".root";
  else 
    OutFileName = name;
  std::cout<<"Making outfile  : " << OutFileName << std::endl;
  std::shared_ptr<TFile> OutFile(new TFile(OutFileName, "RECREATE"));

  Puppi pup(fChain, OutFile);
  pup.PreLoop();
  pup.Loop();
  pup.PostLoop();

  return EXIT_SUCCESS;
}				// ----------  end of function main  ----------
