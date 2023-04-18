#ifndef FRACTION_HPP
#define FRACTION_HPP
#include "Fraction.hpp"
#include <string>
#include <iostream>
using namespace std;

namespace ariel{

    class Fraction{
        private:
            int numerator; 
            int denominator; 

        public:
            Fraction();
            Fraction(int num,int den);
            int getNumerator();
            int getDenominator();

        // friend global IO operators
            friend std::ostream& operator<< (std::ostream& output, const Fraction& f);
            friend std::istream& operator>> (std::istream& input , Fraction& f);
        
            Fraction operator+(const Fraction& f);
            Fraction operator+(double num);
            friend Fraction operator+(const Fraction& f1, const Fraction& f2);
            friend Fraction operator+(const Fraction& f, double d);
            friend Fraction operator+(double d, const Fraction& f);

            Fraction operator-(const Fraction& f);
            Fraction operator-(double num);
            friend Fraction operator-(const Fraction& f1, const Fraction& f2);
            friend Fraction operator-(const Fraction& f, double d);
            friend Fraction operator-(double d, const Fraction& f);

            Fraction operator*(const Fraction& f);
            Fraction operator*(double num);
            friend Fraction operator*(const Fraction& f1, const Fraction& f2);
            friend Fraction operator*(double d, const Fraction& f);
            friend Fraction operator*(const Fraction& f, double d);    

            Fraction operator/(const Fraction& f);
            Fraction operator/(double num);
            friend Fraction operator/(const Fraction& f1, const Fraction& f2);
            friend Fraction operator/(const Fraction& f, double d);
            friend Fraction operator/(double d, const Fraction& f);

            // prefix increment:
            Fraction operator++();
            // postfix increment:
            Fraction operator++(int);
            // prefix decrement:
            Fraction operator--();
            // postfix decrement:
            Fraction operator--(int);

            bool operator>(const Fraction& f);
            bool operator>(double n);

            bool operator<(const Fraction& f);
            bool operator<(double n);

            bool operator>=(const Fraction& f);
            bool operator>=(double n);

            bool operator<=(const Fraction& f);
            bool operator<=(double n);

            bool operator==(const Fraction& f);
            bool operator==(double n);
    };
}
#endif