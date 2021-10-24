#include <iostream>
using namespace std;

int greatestCommonDivisor(int Number1, int Number2)
{
    if (Number1 == 0)
        return -1;

    if (Number2 == 0)
        return -1;

    if (Number1 == Number2)
        return Number1;

    if (Number1 > Number2)
        return greatestCommonDivisor(Number1 - Number2, Number2);
    return greatestCommonDivisor(Number1, Number2 - Number1);
}
int greatestCommonDivisor(int Number1, int Number2);

int main()
{
    int Number1;
    int Number2;
    cout << "Enter Number1 : ";
    cin >> Number1;
    cout << "Enter Number2 : ";
    cin >> Number2;
    cout << "GCD of " << Number1 << " and " << Number2 << " is " << greatestCommonDivisor(Number1, Number2) << endl;
    return 0;
}

