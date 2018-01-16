#ifndef EURO_H
#define EURO_H
#include "Currency.h"

using namespace std;


//Inherit all currency attributes from Currency class
class Euro: public Currency {
public:
      //constructors
      Euro();  
      Euro(): Currency("Euro", "cent")
        
//Update fractional parts into whole parts
void CurrencyPart();
  
      //Overloaded operators
      Euro operator + (const Euro &);
      Euro operator + (const double);
      Euro operator - (const Euro &);
      Euro operator - (const double);
      Euro operator = (const Euro &);
      Euro operator = (const double);

   friend std::ostream& operator << (std::ostream &, const Euro &);
   friend std::istream& operator >> (std::istream &, Euro &);
};

#endif
