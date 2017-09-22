#ifndef ICTEST_H
#define ICTEST_H
 
#include <Arduino.h>
 
class ICtest
{
public:
   Info(int nCI);
   void  testCI();
 
private:
   void  setpin();
};
 
#endif
