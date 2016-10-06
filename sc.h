#ifndef _sc_h_included_
#define _sc_h_included_
//#include "abase.h"
//#include "b.h"

// Forward Declarations
class C;
class D;

class A : public ABase
{
  B m_b;
  C *m_c;
  D *m_d;
  
public:
  void SetC(C *c);
  C *GetC() const;
  
  void ModifyD(D *d);
};
#endif
