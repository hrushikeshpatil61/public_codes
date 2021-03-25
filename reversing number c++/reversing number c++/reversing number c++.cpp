// reversing number c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rev = 0;
    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << rev;
    return 0;
}
