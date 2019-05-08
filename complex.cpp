#include <iostream>
#include <conio.h>
#include "complex.h"

using namespace std;

Complex::Complex(float r=0, float i=0)
{
    real = r;
    image = i;
}
Complex::Complex(const Complex &A)
{
    real = A.real;
    image = A.image;
}
Complex Complex::operator+(Complex &B)
{
    float rl = real + B.real;
    float img = real + B.real;
    return Complex(rl,img);
}
Complex Complex::operator-(Complex &B)
{
    float rl = real - B.real;
    float img = real - B.real;
    return Complex(rl,img);
}
int Complex::operator==(Complex &B)
{
    if ((real == B.real)&&(image == B.image)) return 1;
    else return 0;
}
Complex Complex::operator*(Complex &B)
{
    float rl = real*B.real - image*B.image;
    float img = real*B.image + image*B.real;
    return Complex(rl,img);
}
void Complex::display()
{
    cout << "complex number: " << real << " + " << image << "i" << endl;
}
