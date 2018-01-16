#ifndef DOLLAR_H
#define DOLLAR_H
#include "Currency.h"

using namespace std;


//Inherit all currency attributes from Currency class
class Dollar: public Currency {
public:
      //constructors
      Dollar();  
      Dollar(): Currency("Dollar", "cent")
        
//Update fractional parts into whole parts
void CurrencyPart();
  
      //Overloaded operators
      Dollar operator + (const Dollar &);
      Dollar operator + (const double);
      Dollar operator - (const Dollar &);
      Dollar operator - (const double);
      Dollar operator = (const Dollar &);
      Dollar operator = (const double);

   friend std::ostream& operator << (std::ostream &, const Dollar &);
   friend std::istream& operator >> (std::istream &, Dollar &);
};

#endif
      
  

