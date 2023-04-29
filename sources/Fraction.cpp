#include "Fraction.hpp"
#include <cstring>
#include <cmath>
using namespace std;

// using namespace ariel;

namespace ariel{


   Fraction::Fraction(int numerator,int denomirator):_numerator(numerator),_denomirator(denomirator){
            if(this->_denomirator==0)
                throw runtime_error("zero zero !!");   

        };

  
  
// return GCD of a and b
int Fraction::gcd(int a, int b) {
   int minN = min(a,b);
    int res = 1;

    for(int i=1; i<=minN; i++){
        if(a%i==0 && b%i==0)
            res =i;
    }

    return res;

}


///////////////////////////////

    bool Fraction::operator!() const{return true;} // to check if the mekhni equal to zero or ont
    Fraction& Fraction::operator++(){return *this;} // ++n          
    Fraction Fraction::operator++(int){return Fraction(0,1);} // n++
    Fraction& Fraction::operator--(){return *this;}// --n          
    Fraction Fraction::operator--(int){return Fraction(0,1);}// n--
     
//////////////////////////////  operator +

   Fraction Fraction::operator+(ariel::Fraction const &frac){return Fraction(0,1);}
   Fraction operator+(float number, const Fraction& frac){return Fraction(0,1);}
   Fraction operator+(Fraction const &frac, float number){return Fraction(0,1);}

///////////////////////////////////////// operator -
    Fraction Fraction::operator-(Fraction const &frac){return Fraction(0,1);}
    Fraction operator-(float number,Fraction const &frac){return Fraction(0,1);}
    Fraction operator-(Fraction const &frac, float number){return Fraction(0,1);}

///////////////////////////////////////// operator *

    Fraction Fraction::operator*(ariel::Fraction const &frac){return Fraction(0,1);}
    Fraction operator*(float number,ariel::Fraction const &frac){return Fraction(0,1);}
    Fraction operator*(const Fraction& frac,float number){return Fraction(0,1);}

///////////////////////////////////////// operator /

    Fraction Fraction::operator/(ariel::Fraction const &frac){return Fraction(0,1);}
    Fraction operator/(float number,ariel::Fraction const &frac){return Fraction(0,1);}
    Fraction operator/(const Fraction& frac,float number){return Fraction(0,1);}

/////////////////////////////////////////  operator==

    bool Fraction::operator==(const ariel::Fraction &frac){return true;}   
    bool operator==(const ariel::Fraction &frac, float number){return true;}   
    bool operator==(float number, const ariel::Fraction &frac){return true;}   

/////////////////////////////////////// operator>

    bool Fraction::operator>(const ariel::Fraction &frac){return true;}   
    bool operator>(const ariel::Fraction &frac, float number){return true;}   
    bool operator>(float number, const ariel::Fraction &frac){return true;}   

/////////////////////////////////////////////// operator >=

    bool Fraction::operator>=(const ariel::Fraction &frac){return true;}
    bool operator>=(const ariel::Fraction &frac, float number){return true;}
    bool operator>=(float number, const ariel::Fraction &frac){return true;}
         
/////////////////////////////////// operator <

    bool Fraction::operator<(const ariel::Fraction &frac){return true;}
    bool operator<(const ariel::Fraction &frac, float number){return true;}    
    bool operator<(float number, const ariel::Fraction &frac){return true;}


////////////////////////////////////////////////// operator <=
    bool Fraction::operator<=(const Fraction &frac){return true;}   
    bool operator<=(const ariel::Fraction &frac, float number){return true;}   
    bool operator<=(float number, const ariel::Fraction &frac){return true;}   
///////////////////////////////////////////////



    ostream& operator << (ostream& output, const Fraction& frac){

        return (output << frac.getNumerator() << "/" << frac.getDenominator());

    }


};
       