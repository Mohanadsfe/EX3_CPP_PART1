#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <bits/stdc++.h>
using namespace std;




namespace ariel{

    class Fraction
    {
    private:
        /* data */

        int _denomirator; // mekhni
        int _numerator; // moni

    public:

        Fraction(int numerator,int denomirator);
        

        int getDenominator() const{
            return this->_denomirator;
        }

        int getNumerator() const{
            return this->_numerator;
        }


        int gcd(int a, int b);


        bool operator!() const;   
        Fraction& operator++();    
        Fraction operator++(int);
        Fraction& operator--();
        Fraction operator--(int);

        Fraction operator+(Fraction const &frac);
        Fraction operator-(Fraction const &frac);
        Fraction operator* (Fraction const &frac);
        Fraction operator/ (Fraction const &frac);

        bool operator== (const Fraction& frac);
        bool operator>= (const Fraction& frac);
        bool operator> (const Fraction& frac);
        bool operator<(const Fraction& frac);
        bool operator<= (const Fraction& frac);


        friend Fraction operator*(float number,Fraction const &frac);
        friend Fraction operator+(float number,Fraction const &frac);
        friend Fraction operator-(float number,Fraction const &frac);
        friend Fraction operator/(float number,Fraction const &frac);

        friend Fraction operator*(Fraction const &frac,float number);
        friend Fraction operator+(Fraction const &frac,float number);
        friend Fraction operator-(Fraction const &frac,float number);
        friend Fraction operator/(Fraction const &frac,float number);





      

        friend bool operator>(const Fraction &frac, float number);
        friend bool operator>(float number ,const Fraction &frac);

        friend bool operator<(const Fraction &frac, float number);
        friend bool operator<(float number, const Fraction &frac);


        friend bool operator<=(float number,Fraction const &frac);
        friend bool operator<=(Fraction const &frac,float number);

      
        friend bool operator>=(float number,Fraction const &frac);
        friend bool operator>=(Fraction const &frac,float number);

        friend bool operator==(float number,Fraction const &frac);
        friend bool operator==(Fraction const &frac,float number);

        friend ostream& operator<< (ostream& output, const Fraction& frac);


    };
    
   

};
#endif