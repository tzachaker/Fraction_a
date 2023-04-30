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
            friend std::ostream& operator<< (std::ostream& output, const Fraction& frac);
            friend std::istream& operator>> (std::istream& input , Fraction& frac);
        
            Fraction operator+(const Fraction& frac);
            Fraction operator+(double num);
            friend Fraction operator+(const Fraction& frac1, const Fraction& frac2);
            friend Fraction operator+(const Fraction& frac, double num);
            friend Fraction operator+(double num, const Fraction& frac);

            Fraction operator-(const Fraction& frac);
            Fraction operator-(double num);
            friend Fraction operator-(const Fraction& frac1, const Fraction& frac2);
            friend Fraction operator-(const Fraction& frac, double num);
            friend Fraction operator-(double num, const Fraction& frac);

            Fraction operator*(const Fraction& frac);
            Fraction operator*(double num);
            friend Fraction operator*(const Fraction& frac1, const Fraction& frac2);
            friend Fraction operator*(double num, const Fraction& frac);
            friend Fraction operator*(const Fraction& frac, double num);    

            Fraction operator/(const Fraction& frac);
            Fraction operator/(double num);
            friend Fraction operator/(const Fraction& frac1, const Fraction& frac2);
            friend Fraction operator/(const Fraction& frac, double num);
            friend Fraction operator/(double num, const Fraction& frac);

            // prefix increment:
            Fraction operator++();
            // postfix increment:
            Fraction operator++(int);
            // prefix decrement:
            Fraction operator--();
            // postfix decrement:
            Fraction operator--(int);

            bool operator>(const Fraction& frac);
            bool operator>(double num);

            bool operator<(const Fraction& frac);
            bool operator<(double num);

            bool operator>=(const Fraction& frac);
            bool operator>=(double num);

            bool operator<=(const Fraction& frac);
            bool operator<=(double num);

            bool operator==(const Fraction& frac);
            bool operator==(double num);
    };
}
#endif
