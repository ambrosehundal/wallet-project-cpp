#ifndef RUPEE_H
#define RUPEE_H
#include "Currency.h"

using namespace std;


//Inherit all currency attributes from Currency class
class Rupee: public Currency {
public:
      //constructors
      Rupee();  
      Rupee(): Currency("Rupee", "paise")
        
//Update fractional parts into whole parts
void CurrencyPart();
  
      //Overloaded operators
      Rupee operator + (const Rupee &);
      Rupee operator + (const double);
      Rupee operator - (const Rupee &);
      Rupee operator - (const double);
      Rupee operator = (const Rupee &);
      Rupee operator = (const double);

   friend std::ostream& operator << (std::ostream &, const Rupee &);
   friend std::istream& operator >> (std::istream &, Rupee &);
};

#endif
