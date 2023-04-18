#include "Fraction.hpp"
#include <iostream>
#include <string>
using namespace std;

namespace ariel
{
    Fraction::Fraction()
    {
        this->numerator = 0;
        this->denominator = 1;
    }
    Fraction::Fraction(int num, int den)
    {
        this->numerator = num;
        this->denominator = den;
        if(this->denominator==0)
            throw std::invalid_argument("Division by 0");
    }
    int Fraction::getNumerator()
    {
        return this->numerator;
    }
    int Fraction::getDenominator()
    {
        return this->denominator;
    }

    //---------------------------------------------------------------------------

    std::ostream& operator<<(std::ostream& output, const Fraction& f) {
        return output;
    }

    std::istream& operator>>(std::istream& input, Fraction& f) {
        return input;
    }

    //---------------------------------------------------------------------------

    Fraction Fraction::operator+(const Fraction &f)
    {
        Fraction result;
        return result;
    }
 
    Fraction Fraction::operator+(double num)
    {
        Fraction result;
        return result;
    }

    Fraction operator+(const Fraction& f1, const Fraction& f2) {
        Fraction result;
        return result;
    }

    Fraction operator+(const Fraction& f, double d) {
        Fraction result;
        return result;
    }

    Fraction operator+(double d, const Fraction& f) {
        Fraction result;
        return result;
    }
    //---------------------------------------------------------------------------

    Fraction Fraction::operator-(const Fraction& f) {
        Fraction result;
        return result;
    }

    Fraction Fraction::operator-(double num)
    {
        Fraction result;
        return result;
    }

    Fraction operator-(const Fraction& f1, const Fraction& f2) {
        Fraction result;
        return result;
    }

    Fraction operator-(const Fraction& f, double d) {
        Fraction result;
        return result;
    }

    Fraction operator-(double d, const Fraction& f) {
        Fraction result;
        return result;
    }

    //---------------------------------------------------------------------------

    Fraction Fraction::operator*(const Fraction& f) {
        Fraction result;
        return result;
    }

    Fraction Fraction::operator*(double num)
    {
        Fraction result;
        return result;
    }

        Fraction operator*(const Fraction& f1, const Fraction& f2) {
        Fraction result;
        return result;
    }

    Fraction operator*(const Fraction& f, double d) {
        Fraction result;
        return result;
    }

    Fraction operator*(double d, const Fraction& f) {
        Fraction result;
        return result;
    }

    //---------------------------------------------------------------------------

    Fraction Fraction::operator/(const Fraction &f)
    {
        Fraction result;
        return result;
    }

    Fraction Fraction::operator/(double num)
    {
        Fraction result;
        return result;
    }

    Fraction operator/(const Fraction& f1, const Fraction& f2) {
        Fraction result;
        return result;
    }

    Fraction operator/(const Fraction& f, double d) {
        Fraction result;
        return result;
    }

    Fraction operator/(double d, const Fraction& f) {
        Fraction result;
        return result;
    }

    //---------------------------------------------------------------------------

    Fraction Fraction::operator++()
    {
        Fraction result;
        return result;
    }

    Fraction Fraction::operator++(int num)
    {
        Fraction result;
        return result;
    }

    //---------------------------------------------------------------------------

    Fraction Fraction::operator--()
    {
        Fraction result;
        return result;
    }

    Fraction Fraction::operator--(int num)
    {
        Fraction result;
        return result;
    }

    //---------------------------------------------------------------------------

    bool Fraction::operator>(const Fraction &f)
    {
        return false;
    }

    bool Fraction::operator>(double n)
    {
        return false;
    }

    //---------------------------------------------------------------------------

    bool Fraction::operator<(const Fraction &f)
    {
        return false;
    }

    bool Fraction::operator<(double n)
    {
        return false;
    }

    //---------------------------------------------------------------------------

    bool Fraction::operator>=(const Fraction &f)
    {
        return false;
    }

    bool Fraction::operator>=(double n)
    {
        return false;
    }

    //---------------------------------------------------------------------------

    bool Fraction::operator<=(const Fraction &f)
    {
        return false;
    }

    bool Fraction::operator<=(double n)
    {
        return false;
    }

    //---------------------------------------------------------------------------

    bool Fraction::operator==(const Fraction &f)
    {
        return false;
    }

    bool Fraction::operator==(double n)
    {
        return false;
    }
}
