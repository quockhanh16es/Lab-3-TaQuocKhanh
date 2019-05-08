#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED

class fraction
{
private:
    int nom;
    int denom;
public:
    fraction(int n, int dn);
    fraction(const fraction&A);
    fraction operator+(fraction &B);
    fraction operator-(fraction &B);
    int operator==(fraction &B);
    fraction operator*(fraction &B);
    fraction operator/(fraction &B);
    void display();
    fraction reduce();
};

#endif // FRACTION_H_INCLUDED
