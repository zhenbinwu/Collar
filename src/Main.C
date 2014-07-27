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
#include "Puppi.h"

// ===  FUNCTION  ============================================================
//         Name:  main
//  Description:  
// ===========================================================================
int main ( int argc, char *argv[] )
{
  Puppi f(0);

  f.Loop();
  return EXIT_SUCCESS;
}				// ----------  end of function main  ----------
