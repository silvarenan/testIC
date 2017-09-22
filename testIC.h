#ifndef BIBLIO_CI_H
#define BIBLIO_CI_H
 
#include <Arduino.h>
 
class biblioCI
{
public:
   Info(int nCI);
   void  testCI();
 
private:
   void  setpin();
};
 
#endif
