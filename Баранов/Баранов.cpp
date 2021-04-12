#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

long int gcd(const long int x, const long int y)
{
    return (y == 0 ? x : gcd(y, x % y));
}

int main()
{
    int x, y;

    cout << "Input 2 numbers: ";
    cin >> x >> y;
    cout << "gcd = " << gcd(x, y) << endl;
    _getch();
    return 0;

}