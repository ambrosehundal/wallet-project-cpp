#ifndef YUAN_H
#define YUAN_H
#include "Currency.h"

using namespace std;


//Inherit all currency attributes from Currency class
class Yuan: public Currency {
public:
      //constructors
      Yuan();  
      Yuan(): Currency("Yuan", "fen")
        
//Update fractional parts into whole parts
void CurrencyPart();
  
      //Overloaded operators
      Yuan operator + (const Yuan &);
      Yuan operator + (const double);
      Yuan operator - (const Yuan &);
      Yuan operator - (const double);
      Yuan operator = (const Yuan &);
      Yuan operator = (const double);

   friend std::ostream& operator << (std::ostream &, const Yuan &);
   friend std::istream& operator >> (std::istream &, Yuan &);
};

#endif
