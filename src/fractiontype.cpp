#include<iostream>
#include "fractiontype.h"
using namespace std;
        int fractionType::gcd(int a, int b)
        {
            return (b == 0 ? a : gcd(b, a%b));
        }
        //Default Constructor
        fractionType::fractionType()
        {
            num = 1;
            denom = 1;
        }
        //Constructor
        fractionType::fractionType(int n, int d)
        {
            int i, g;
            //If denominator is zero
            if(d == 0)
            {
                cout << "\n Error!!! Denominator can't be zero... \n";
                denom = 1;
                num = n;
            }
            else
            {
                //Getting GCD
                g = gcd(n, d);
                //Reducing Fraction
                num = n/g;
                denom = d/g;
            }
        }
        //Overloading + operator
        fractionType fractionType::operator+(fractionType r)
        {
            int g;
            fractionType temp;
            //Adding numerator and denominator
            temp.num = ( num * r.denom ) + ( denom * r.num );
            temp.denom = denom * r.denom;
            //Finding GCD
            g = gcd(temp.num, temp.denom);
            //Reducing fractions
            temp.num = temp.num / g;
            temp.denom = temp.denom / g;
            return temp;
        }
        //Overloading - operator
        fractionType fractionType::operator-(fractionType r)
        {
            int g;
            fractionType temp;
            //Updating numerator and denominator
            temp.num = ( num * r.denom ) - ( denom * r.num );
            temp.denom = denom * r.denom;
            //Finding GCD
            g = gcd(temp.num, temp.denom);
            //Reducing fractions
            temp.num = temp.num / g;
            temp.denom = temp.denom / g;
            if(temp.denom < 0)
            {
                temp.denom = -temp.denom;
                temp.num = -temp.num;
            }
            return temp;
        }
        //Overloading * operator
        fractionType fractionType::operator*(fractionType r)
        {
            int g;
            fractionType temp;
            //Updating numerator and denominator
            temp.num = (num * r.num );
            temp.denom = (denom * r.denom);
            //Finding GCD
            g = gcd(temp.num, temp.denom);
            //Reducing fractions
            temp.num = temp.num / g;
            temp.denom = temp.denom / g;
            return temp;
        }
        //Overloading / operator
        fractionType fractionType::operator/(fractionType r)
        {
            int g;
            fractionType temp;
            //Updating numerator and denominator
            temp.num = (num * r.denom);
            temp.denom = (denom * r.num);
            //Finding GCD
            g = gcd(temp.num, temp.denom);
            //Reducing fractions
            temp.num = temp.num / g;
            temp.denom = temp.denom / g;
            return temp;
        }
        //Overloading equality operator
        bool fractionType::operator==(fractionType r)
        {
            return ((num * r.denom) == (r.num * denom));
        }
        //Overloading in-equality operator
        bool fractionType::operator!=(fractionType r)
        {
            return ((num * r.denom) != (r.num * denom));
        }
        //Overloading greater than operator
        bool fractionType::operator>(fractionType r)
        {
            return ((num * r.denom) > (r.num * denom));
        }
        //Overloading less than operator
        bool fractionType::operator<(fractionType r)
        {
            return ((num * r.denom) < (r.num * denom));
        }
        //Overloading greater than or equal to operator
        bool fractionType::operator>=(fractionType r)
        {
            return ((num * r.denom) >= (r.num * denom));
        }
        //Overloading less than or equal to operator
        bool fractionType::operator<=(fractionType r)
        {
            return ((num * r.denom) <= (r.num * denom));
        }
        ostream &operator<<( ostream &output, fractionType &D ) {
         output << D.num << "/" << D.denom;
         return output;
        }
        istream &operator>>( istream &input, fractionType &D ) {
            char ch;
         input >> D.num >> ch >> D.denom;
         return input;
        }
        //Function that reduces fraction
        void fractionType::reduceFraction()
        {
            int g;
            fractionType temp;
            //Updating numerator and denominator
            temp.num = num;
            temp.denom = denom;
            //Finding GCD
            g = gcd(temp.num, temp.denom);
            //Reducing fractions
            temp.num = temp.num / g;
            temp.denom = temp.denom / g;
            //Printing reduced fraction
            cout << endl << temp.num << "/" << temp.denom << endl;
        }
        //Function that prints decimal equivalent
        void fractionType::printDecimalEquivalent()
        {
            cout << endl << num << "/" << denom << " = " << (num/(double)denom) << endl;
        }






