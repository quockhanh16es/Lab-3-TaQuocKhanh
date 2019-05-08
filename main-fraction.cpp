#include <iostream>
#include <conio.h>
#include "fraction.h"
using namespace std;

int main()
{
    fraction f1(3,5);
    fraction f2(5,15);
    fraction f3(4,9);
    fraction f4(-5,12);
    fraction ref1 = f3 + f2;
    ref1.display();
    ref1 = f4-f1;
    ref1.display();
    ref1 = f3*f1;
    ref1.display();
    ref1 = f4/f2;
    ref1.display();
    fraction f5(1,5);
    if (!(f2 == f5)) cout << "the two complex number is unequal" << endl;
    else cout << "the two complex number is equal" << endl;
    if (!(f4 == f2)) cout << "the two complex number is unequal" << endl;
    else cout << "the two complex number is equal" << endl;

}
