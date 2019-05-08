#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
private:
    float real;
    float image;
public:
    Complex(float r, float i);
    Complex(const Complex &A);
    Complex operator+(Complex &B);
    Complex operator-(Complex &B);
    int operator==(Complex &B);
    Complex operator*(Complex &B);
    void display();
};

#endif // COMPLEX_H_INCLUDED
