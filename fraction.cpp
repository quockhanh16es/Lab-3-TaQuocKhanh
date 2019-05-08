#include <iostream>
#include <conio.h>
#include "fraction.h"
using namespace std;
fraction::fraction(int n=0, int dn=1)
{
    nom = n;
    denom = dn;
}
fraction::fraction(const fraction&A)
{
    nom = A.nom;
    denom = A.denom;
}
fraction fraction::operator+(fraction &B)
{
    if (denom == B.denom)
    {
        int ren = nom + B.nom;
        int redn = denom;
        return fraction(ren,redn);
    }
    else
    {
        int ren = nom*B.denom + denom*B.nom;
        int redn = denom*B.denom;
        return fraction(ren,redn);
    }
}
fraction fraction::operator-(fraction &B)
{
    if (denom == B.denom)
    {
        int ren = nom - B.nom;
        int redn = denom;
        return fraction(ren,redn);
    }
    else
    {
        int ren = nom*B.denom - denom*B.nom;
        int redn = denom*B.denom;
        return fraction(ren,redn);
    }
}
fraction fraction::operator*(fraction &B)
{
    int ren = nom*B.nom;
    int redn = denom*B.denom;
    return fraction(ren,redn);
}
fraction fraction::operator/(fraction &B)
{
    int ren = nom*B.denom;
    int redn = denom*B.nom;
    return fraction(ren,redn);
}
int fraction::operator==(fraction &B)
{
    if ((B.nom/nom)==(B.denom/denom)) return 1;
    else return 0;
}
fraction fraction::reduce()
{
    for (int i = nom * denom; i > 1; i--)
        {
            if ((denom % i == 0) && (nom % i == 0))
            {
            denom /= i;
            nom /= i;
            }
        }
    return fraction(nom,denom);
}
void fraction::display()
{
    cout << "the fraction is " << nom << "/" << denom << endl;
    reduce();
    cout << "after reduce: " << nom << "/" << denom << endl;
}
