#ifndef YEN_H
#define YEN_H
#include "Currency.h"

using namespace std;


//Inherit all currency attributes from Currency class
class Yen: public Currency {
public:
      //constructors
      Yen();  
      Yen(): Currency("Yen", "sen")
        
//Update fractional parts into whole parts
void CurrencyPart();
  
      //Overloaded operators
      Yen operator + (const Yen &);
      Yen operator + (const double);
      Yen operator - (const Yen &);
      Yen operator - (const double);
      Yen operator = (const Yen &);
      Yen operator = (const double);

   friend std::ostream& operator << (std::ostream &, const Yen &);
   friend std::istream& operator >> (std::istream &, Yen &);
};

#endif
