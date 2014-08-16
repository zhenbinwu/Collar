// ===========================================================================
// 
//       Filename:  JetInfo.h
// 
//    Description:  A JetInfo class from Puppi 
// 
//        Version:  1.0
//        Created:  07/27/2014 06:53:38 PM
//       Revision:  none
//       Compiler:  g++
// 
//         Author:  Zhenbin Wu (benwu), benwu@fnal.gov
//        Company:  Baylor University, CDF@FNAL, CMS@LPC
// 
// ===========================================================================


#ifndef  __JETINFO_INC__
#define  __JETINFO_INC__

#include "TMath.h"

struct JetInfo {
    float pt;
    float ptcorr;
    float ptraw;
    float ptclean;
    float pttrim;
    float pttrimsafe;
    float ptconst;
    float ptunc;
    float eta;
    float phi;
    float m;
    float mraw;
    float mclean;
    float mtrim;
    float mtrimsafe;
    float mconst;

    JetInfo (): pt(), ptcorr(), ptraw(), ptclean(), pttrim(), pttrimsafe(), ptconst(), 
    ptunc(), eta(), phi(), m(), mraw(), mclean(), mtrim(), mtrimsafe(), mconst() {}

    JetInfo (float pt_, float ptcorr_, float ptraw_, float ptclean_, float pttrim_, 
        float pttrimsafe_, float ptconst_, float ptunc_, float eta_, float phi_, float m_, 
        float mraw_, float mclean_, float mtrim_, float mtrimsafe_, float mconst_):
      pt(pt_), ptcorr(ptcorr_), ptraw(ptraw_),
      ptclean(ptclean_), pttrim(pttrim_), pttrimsafe(pttrimsafe_),
      ptconst(ptconst_), ptunc(ptunc_), eta(eta_),
      phi(phi_), m(m_), mraw(mraw_), mclean(mclean_),
      mtrim(mtrim_), mtrimsafe(mtrimsafe_), mconst(mconst_) {}

    double deltaR(JetInfo& iJet)
    {
        double pEta = fabs(iJet.eta-eta);
        double pPhi = fabs(iJet.phi - phi);
        if(pPhi > 2.*TMath::Pi()-pPhi) pPhi =  2.*TMath::Pi()-pPhi;
        return  sqrt(pEta*pEta+pPhi*pPhi);
    }
};

  

#endif   // ----- #ifndef __jetinfo_INC__  -----
