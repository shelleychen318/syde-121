/*
Name: Shelley Chen
Student ID: 21002650
Date: November 11, 2022
Course: SYDE 121
Lab Room: DC 1350
Assignment 7
Program Description: Program that conducts rational number operations.
*/
#include <iostream>
using namespace std;

class Fraction
{
public:
    int num, den; // member attributes

    // constructor function declarations
    Fraction(int numerator_in, int denominator_in);
    Fraction(int numerator_in);

    // member function declarations
    void add(Fraction fract2);
    void subtract(Fraction fract2);
    void multiply(Fraction fract2);
    void divide(Fraction fract2);
};

// constructor with numerator and denominator inputted
Fraction::Fraction(int numerator_in, int denominator_in)
{
    num = numerator_in;
    den = denominator_in;
}

// constructor with numerator inputted
Fraction::Fraction(int numerator_in)
{
    num = numerator_in;
    den = 1;
}

// function that computes addition of two fractions
void Fraction::add(Fraction fract2)
{
    int top = (num * fract2.den) + (den * fract2.num);
    int bottom = (den * fract2.den);

    cout << "addition: " << num << "/" << den << " + " << fract2.num << "/" << fract2.den << " = " << top << "/" << bottom << endl;
}

// function that computes subtraction of two fractions
void Fraction::subtract(Fraction fract2)
{
    int top = (num * fract2.den) - (den * fract2.num);
    int bottom = (den * fract2.den);

    cout << "subtraction: " << num << "/" << den << " - " << fract2.num << "/" << fract2.den << " = " << top << "/" << bottom << endl;
}

// function that computes multiplication of two fractions
void Fraction::multiply(Fraction fract2)
{
    int top = (num * fract2.num);
    int bottom = (den * fract2.den);

    cout << "multipication: " << num << "/" << den << " x " << fract2.num << "/" << fract2.den << " = " << top << "/" << bottom << endl;
};

// function that computes division of two fractions
void Fraction::divide(Fraction fract2)
{
    int top = (num * fract2.den);
    int bottom = (fract2.num * den);

    cout << "division: (" << num << "/" << den << ") / (" << fract2.num << "/" << fract2.den << ") = " << top << "/" << bottom << endl;
};

int main()
{
    int num1, den1, num2, den2;

    cout << "Numerator for fracion 1: ";
    cin >> num1;
    cout << "Denominator for fracion 2: ";
    cin >> den1;
    cout << "Numerator for fracion 2: ";
    cin >> num2;
    cout << "Denominator for fracion 2: ";
    cin >> den2;

    // create instances of the Fraction class
    Fraction fract1(num1, den1);
    Fraction fract2(num2, den2);

    // Fraction fract1(num1);
    // Fraction fract2(num2);

    // call Fraction functions
    fract1.add(fract2);
    fract1.subtract(fract2);
    fract1.multiply(fract2);
    fract1.divide(fract2);

    return 0;
}