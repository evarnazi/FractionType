#ifndef FRACTIONTYPE_H_INCLUDED
#define FRACTIONTYPE_H_INCLUDED
#include<iostream>
using namespace std;
class fractionType
{
    private:
        int num;
        int denom;
    public:
        //Default Constructor
        fractionType();
        //Constructor
        fractionType(int n, int d);
        //GCD Function
        int gcd(int a, int b);
        //Overloading + operator
        fractionType operator+(fractionType r);
        //Overloading - operator
        fractionType operator-(fractionType r);
        //Overloading * operator
        fractionType operator*(fractionType r);
        //Overloading / operator
        fractionType operator/(fractionType r);
        //Overloading equality operator
        bool operator==(fractionType r);
        //Overloading in-equality operator
        bool operator!=(fractionType r);
        //Overloading greater than operator
        bool operator>(fractionType r);
        //Overloading less than operator
        bool operator<(fractionType r);
        //Overloading greater than or equal to operator
        bool operator>=(fractionType r);
        //Overloading less than or equal to operator
        bool operator<=(fractionType r);
        //Extraction operator
        friend ostream &operator<<(ostream &, fractionType &);
        //Insertion operator
        friend istream &operator>>(istream &, fractionType &);
        //Function that prints reduced form
        void reduceFraction();
        //Function that prints decimal equivalent
        void printDecimalEquivalent();
};
#endif // FRACTIONTYPE_H_INCLUDED
