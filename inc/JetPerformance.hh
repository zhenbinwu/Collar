// ===========================================================================
// 
//       Filename:  JetPerformance.h
// 
//    Description:  A class to study JetPerformance 
// 
//        Version:  1.0
//        Created:  07/27/2014 06:00:48 PM
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  Zhenbin Wu (benwu), benwu@fnal.gov
//        Company:  Baylor University, CDF@FNAL, CMS@LPC
// 
// ===========================================================================


#include "HistTool.hh"
#include "JetInfo.hh"
#include "TF1.h"
#include <memory>
#include <sstream>
#include <cassert>

// ===========================================================================
//        Class:  JetPerformance
//  Description:  
// ===========================================================================
class JetPerformance
{
  public:

    // ====================  LIFECYCLE     ===============================
    JetPerformance(std::shared_ptr<TFile> outfile_, std::string name, std::string type_);
    JetPerformance ( const JetPerformance &other );   // copy constructor
    ~JetPerformance ();                            // destructor

    // ====================  ACCESSORS     ===============================
    bool BookHistogram();
    bool Loop(JetInfo& GenJet, JetInfo &RecoJet);
    bool WriteHistogram();

    // ====================  MUTATORS      ===============================

    // ====================  OPERATORS     ===============================

    JetPerformance& operator = ( const JetPerformance &other ); // assignment operator

    // ====================  DATA MEMBERS  ===============================

  protected:
    // ====================  METHODS       ===============================
    bool BookPerfHistogram();
    bool FillPerfHistogram(JetInfo& GenJet, JetInfo &RecoJet);
    std::vector<double> GetPerformance(std::string name, bool fit);

    // ====================  DATA MEMBERS  ===============================
    std::vector<int> PTRange;
    std::vector<double> EtaRange;
    std::vector<int> PTBound;
    std::vector<double> EtaBound; 


  private:
    // ====================  METHODS       ===============================
    std::string type;
    std::shared_ptr<TFile> outfile;
    HistTool *hist;

    // ====================  DATA MEMBERS  ===============================

}; // -----  end of class JetPerformance  -----

