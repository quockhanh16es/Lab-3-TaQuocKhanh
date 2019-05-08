#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    //cout << "Create 3 complex number: " << endl;
    Complex cp1(8,4);
    Complex cp2(-6,5);
    Complex cp3(2,-4);
    Complex cp4(-5,-7);
    Complex cpre1 = cp1 + cp2;
    cpre1.display();
    cpre1 = cp4 - cp3;
    cpre1.display();
    cpre1 = cp2*cp3;
    cpre1.display();
    Complex cp5 = cpre1;
    if (!(cp4 == cp2)) cout << "the two complex number is unequal" << endl;
    else cout << "the two complex number is equal" << endl;
    if (!(cp5 == cpre1)) cout << "the two complex number is unequal" << endl;
    else cout << "the two complex number is equal" << endl;
    return 0;
}
