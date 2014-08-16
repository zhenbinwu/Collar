// ===========================================================================
// 
//       Filename:  JetPerformanceAna.C
// 
//    Description:  A class to study the JetPerformance in the sample
// 
//        Version:  1.0
//        Created:  07/27/2014 05:58:59 PM
//       Compiler:  g++ -std=c++11
// 
//         Author:  Zhenbin Wu (benwu)
//          Email:  benwu@fnal.gov
//        Company:  Baylor University, CDF@FNAL, CMS@LPC
// 
// ===========================================================================


#include "JetPerformance.hh"

//----------------------------------------------------------------------------
//       Class:  JetPerformance
//      Method:  JetPerformance
// Description:  constructor
//----------------------------------------------------------------------------
JetPerformance::JetPerformance(std::shared_ptr<TFile> outfile_, std::string name, std::string type_):
  type(type_)
{
  std::stringstream ss;
  ss << "JetPerf_" <<name<<"_" << type ;
  hist = new HistTool(outfile_, ss.str(), ss.str());

  PTRange = {10, 20, 40, 200, 500, 1000};
  EtaRange = {-5, -3, 0, -3, 5};
  PTBound = {10, 20, 40, 200, 500, 1000};
  EtaBound = {0, 1.5, 3, 5};
}  // -----  end of method JetPerformance::JetPerformance  (constructor)  -----

//----------------------------------------------------------------------------
//       Class:  JetPerformance
//      Method:  JetPerformance
// Description:  copy constructor
//----------------------------------------------------------------------------
JetPerformance::JetPerformance( const JetPerformance &other )
{
}  // -----  end of method JetPerformance::JetPerformance  (copy constructor)  -----

//----------------------------------------------------------------------------
//       Class:  JetPerformance
//      Method:  ~JetPerformance
// Description:  destructor
//----------------------------------------------------------------------------
JetPerformance::~JetPerformance ()
{
}  // -----  end of method JetPerformance::-JetPerformance  (destructor)  -----

//----------------------------------------------------------------------------
//       Class:  JetPerformance
//      Method:  operator =
// Description:  assignment operator
//----------------------------------------------------------------------------
  JetPerformance&
JetPerformance::operator = ( const JetPerformance &other )
{
  if ( this != &other ) {
  }
  return *this;
}  // -----  end of method JetPerformance::operator =  (assignment operator)  ---



// ===  FUNCTION  ============================================================
//         Name:  JetPerformance::BookHistogram
//  Description:  
// ===========================================================================
bool JetPerformance::BookHistogram()
{
  // Basic kinematis
  hist->AddTH1("JetPT", "JetPT", "Jet PT", "Number of Jets", 100, 0, 500);
  hist->AddTH1("JetEta", "JetEta", "Jet #eta", "Number of Jets", 100, -5, 5);
  hist->AddTH1("GenJetPT", "GenJetPT", "GenJet PT", "Number of Jets", 100, 0, 500);
  hist->AddTH1("GenJetEta", "GenJetEta", "GenJet #eta", "Number of Jets", 100, -5, 5);
  hist->AddTH1("JetEta30", "JetEta30", "Jet #eta (PT>30GeV)", "Number of Jets", 100, -5, 5);
  hist->AddTH1("JetEta50", "JetEta50", "Jet #eta (PT>50GeV)", "Number of Jets", 100, -5, 5);
  hist->AddTH1("JetEta80", "JetEta80", "Jet #eta (PT>80GeV)", "Number of Jets", 100, -5, 5);
  hist->AddTH1("JetEta100", "JetEta100", "Jet #eta (PT>100GeV)", "Number of Jets", 100, -5, 5);

  // Jet Performance plot
  BookPerfHistogram();
  return true;
}       // -----  end of function JetPerformance::BookHistogram  -----

// ===  FUNCTION  ============================================================
//         Name:  JetPerformance::BookPerfHistogram
//  Description:  
// ===========================================================================
bool JetPerformance::BookPerfHistogram()
{

//----------------------------------------------------------------------------
//  Jet Performance with Range
//----------------------------------------------------------------------------
  std::stringstream ss_name, ss_title;
  for (int i = 0; i < PTRange.size()-1; ++i)
  {
    for (int j = 0; j < EtaRange.size()-1; ++j)
    {
      // Different PT and Eta range
      ss_name.str("");
      ss_title.str("");
      ss_name << "Jet_" << "PT" << PTRange.at(i) << "_" << PTRange.at(i+1)
        << "_Eta" << EtaRange.at(j) << "_" << EtaRange.at(j+1);
      ss_title << "p_{T} / p_{T}^{gen} "
        << "( " << PTRange.at(i) << " < p_{T}^{gen} < " << PTRange.at(i+1) 
        << ", " << EtaRange.at(j) << " < #eta^{gen} < " << EtaRange.at(j+1) << " )";
      hist->AddTH1(ss_name.str(), ss_name.str(), ss_title.str(), "Number of Jets", 90, -3, 3);
      
    }

    // Different PT, full Eta range
    ss_name.str("");
    ss_title.str("");
    ss_name << "Jet_" << "PT" << PTRange.at(i) << "_" << PTRange.at(i+1)
      << "_Eta" << EtaRange.front() << "_" << EtaRange.back();
    ss_title << "p_{T} / p_{T}^{gen} "
      << "( " << PTRange.at(i) << " < p_{T}^{gen} < " << PTRange.at(i+1) 
      << ", " << EtaRange.front() << " < #eta^{gen} < " << EtaRange.back() << " )";
    hist->AddTH1(ss_name.str(), ss_name.str(), ss_title.str(), "Number of Jets", 90, -3, 3);
  }


//----------------------------------------------------------------------------
//  Jet Performance with Bound
//----------------------------------------------------------------------------
  for (int i = 0; i < PTBound.size(); ++i)
  {
    for (int j = 0; j < EtaBound.size()-1; ++j)
    {
      // Different PT and Eta bound
      ss_name.str("");
      ss_title.str("");
      ss_name << "Jet_" << "PT" << PTBound.at(i) << "_Eta" << EtaBound.at(j) <<"_" << EtaBound.at(j+1);
      ss_title << "p_{T} / p_{T}^{gen} "
        << "( " << "p_{T}^{gen} > " << PTBound.at(i) 
        << ", " << EtaBound.at(j) << " < |#eta^{gen}| < " << EtaBound.at(j+1) << " )";
      hist->AddTH1(ss_name.str(), ss_name.str(), ss_title.str(), "Number of Jets", 90, -3, 3);
      
    }

    ss_name.str("");
    ss_title.str("");
    ss_name << "Jet_" << "PT" << PTBound.at(i) << "_Eta" << EtaBound.back();
    ss_title << "p_{T} / p_{T}^{gen} "
      << "( " << "p_{T}^{gen} > " << PTBound.at(i) 
      << ", |#eta^{gen}| < " << EtaBound.back() << " )";
    hist->AddTH1(ss_name.str(), ss_name.str(), ss_title.str(), "Number of Jets", 90, -3, 3);
  }

//----------------------------------------------------------------------------
//  Jet Performance with Bound and Range
//----------------------------------------------------------------------------
  for (int i = 0; i < PTBound.size(); ++i)
  {
    for (int j = 0; j < EtaRange.size()-1; ++j)
    {
      // Different PT and Eta bound
      ss_name.str("");
      ss_title.str("");
      ss_name << "Jet_" << "PT" << PTBound.at(i) << "_Eta" << EtaRange.at(j) <<"_" << EtaRange.at(j+1);
      ss_title << "p_{T} / p_{T}^{gen} "
        << "( " << "p_{T}^{gen} > " << PTBound.at(i) 
        << ", " << EtaRange.at(j) << " < #eta^{gen} < " << EtaRange.at(j+1) << " )";
      hist->AddTH1(ss_name.str(), ss_name.str(), ss_title.str(), "Number of Jets", 90, -3, 3);
      
    }

  }

  return true;
}       // -----  end of function JetPerformance::BookPerfHistogram  -----

// ===  FUNCTION  ============================================================
//         Name:  JetPerformance::FillPerfHistogram
//  Description:  
// ===========================================================================
bool JetPerformance::FillPerfHistogram(JetInfo& GenJet, JetInfo &RecoJet)
{
  
  if (GenJet.pt == 0 ) return false;

  double res = -999;
  std::stringstream ss_name;
  
  if (type == "pt") res = RecoJet.pt / GenJet.ptraw;
  if (type == "ptraw") res = RecoJet.ptraw / GenJet.ptraw;
  if (type == "ptcorr") res = RecoJet.ptcorr / GenJet.ptraw;


//----------------------------------------------------------------------------
//  Jet Performance with Range
//----------------------------------------------------------------------------
  for (int i = 0; i < PTRange.size()-1; ++i)
  {
    if (GenJet.ptraw < PTRange.at(i) || GenJet.ptraw > PTRange.at(i+1))
      continue;

    for (int j = 0; j < EtaRange.size()-1; ++j)
    {
      if (GenJet.eta < EtaRange.at(j) || GenJet.eta > EtaRange.at(j+1))
        continue;
      
      ss_name.str("");
      ss_name << "Jet_" << "PT" << PTRange.at(i) << "_" << PTRange.at(i+1)
        << "_Eta" << EtaRange.at(j) << "_" << EtaRange.at(j+1);
      hist->FillTH1(ss_name.str(), res);
    }

    if (GenJet.eta < EtaRange.front() || GenJet.eta > EtaRange.back())
      continue;

    ss_name.str("");
    ss_name << "Jet_" << "PT" << PTRange.at(i) << "_" << PTRange.at(i+1)
      << "_Eta" << EtaRange.front()<< "_" << EtaRange.back();
    hist->FillTH1(ss_name.str(), res);
  }

//----------------------------------------------------------------------------
//  Jet Performance with Bound
//----------------------------------------------------------------------------
  for (int i = 0; i < PTBound.size()-1; ++i)
  {
    for (int j = 0; j < EtaBound.size()-1; ++j)
    {
      assert(EtaBound.at(j) >= 0);
      if (GenJet.ptraw > PTBound.at(i) && fabs(GenJet.eta) > EtaBound.at(j) 
          && fabs(GenJet.eta) < EtaBound.at(j+1) )
      {
        // Different PT and Eta bound
        ss_name.str("");
        ss_name << "Jet_" << "PT" << PTBound.at(i) << "_Eta" << EtaBound.at(j) <<"_" << EtaBound.at(j+1);
        hist->FillTH1(ss_name.str(), res);
      }
      
    }

    if (GenJet.ptraw > PTBound.at(i) && GenJet.eta < EtaBound.back() )
    {
      ss_name.str("");
      ss_name << "Jet_" << "PT" << PTBound.at(i) << "_Eta" << EtaBound.back();
      hist->FillTH1(ss_name.str(), res);
    }
  }

//----------------------------------------------------------------------------
//  Jet Performance with Bound and Range
//----------------------------------------------------------------------------
  for (int i = 0; i < PTBound.size()-1; ++i)
  {
    for (int j = 0; j < EtaRange.size()-1; ++j)
    {
      if (GenJet.ptraw > PTBound.at(i) && GenJet.eta > EtaRange.at(j) && GenJet.eta < EtaRange.at(j+1) )
      {
        // Different PT and Eta bound
        ss_name.str("");
        ss_name << "Jet_" << "PT" << PTBound.at(i) << "_Eta" << EtaRange.at(j) <<"_" << EtaRange.at(j+1);
        hist->FillTH1(ss_name.str(), res);
      }
      
    }
  }

  return true;
}       // -----  end of function JetPerformance::FillPerfHistogram  -----

// ===  FUNCTION  ============================================================
//         Name:  JetPerformance::Loop
//  Description:  
// ===========================================================================
bool JetPerformance::Loop(JetInfo& GenJet, JetInfo &RecoJet)
{

  hist->FillTH1("JetPT", RecoJet.pt);
  hist->FillTH1("JetEta", RecoJet.eta);
  if (GenJet.pt != 0)
  {
    hist->FillTH1("GenJetPT", GenJet.pt);
    hist->FillTH1("GenJetEta", GenJet.eta);
  }

  if (RecoJet.pt>30) hist->FillTH1("JetEta30", RecoJet.eta);
  if (RecoJet.pt>50) hist->FillTH1("JetEta50", RecoJet.eta);
  if (RecoJet.pt>80) hist->FillTH1("JetEta80", RecoJet.eta);
  if (RecoJet.pt>100) hist->FillTH1("JetEta100", RecoJet.eta);


  // Jet Performance plot
  FillPerfHistogram(GenJet, RecoJet);
  return true;
}       // -----  end of function JetPerformance::Loop  -----

// ===  FUNCTION  ============================================================
//         Name:  JetPerformance::WriteHistogram
//  Description:  
// ===========================================================================
bool JetPerformance::WriteHistogram()
{
  hist->WriteTH1();
  return true;
}       // -----  end of function JetPerformance::WriteHistogram  -----

// ===  FUNCTION  ============================================================
//         Name:  JetPerformance::GetPerformance
//  Description:  
// ===========================================================================
std::vector<double> JetPerformance::GetPerformance(std::string name, bool fit)
{
  std::vector<double> result;

  double hisMean = hist->HisMap[name]->GetMean();
  double hisRMS = hist->HisMap[name]->GetRMS();
  if (!fit)
  {
    result = {hisMean, hisRMS, 0, 0};
    return result;
  }
  //TF1 fitfuc("gauss", hisMean-hisRMS, hisMean+hisRMS);
  //hist->HisMap[name]->Fit(fitfuc)
  //result = {fitfuc.GetParameter(1), fitfuc.GetParameter(2), fitfuc.GetParError (1), fitfuc.GetParError (2)};

  return result;
}       // -----  end of function JetPerformance::GetPerformance  -----
