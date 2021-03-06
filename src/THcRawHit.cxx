///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// THcRawHit                                                                 //
//                                                                           //
// Abstract class for a single raw hit                                       //
//                                                                           //
// Contains plane, counter and at least one data value                       //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#include "THcRawHit.h"

//THcRawHit::~THcRawHit()
//{}

Int_t THcRawHit::Compare(const TObject* obj) const
{
  // Compare to sort by plane and counter

  const THcRawHit* hit = dynamic_cast<const THcRawHit*>(obj);

  if(!hit) return -1;
  Int_t p1 = fPlane;
  Int_t p2 = hit->fPlane;
  if(p1 < p2) return -1;
  else if(p1 > p2) return 1;
  else {
    Int_t c1 = fCounter;
    Int_t c2 = hit->fCounter;
    if(c1 < c2) return -1;
    else if (c1 == c2) return 0;
    else return 1;
  }
}


ClassImp(THcRawHit)

//_____________________________________________________________________________
