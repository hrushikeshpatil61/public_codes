// queue at school (codef 163).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string queue;
    cin >> queue;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < (queue.size())-1;j++) {
            if (queue[j] == 'B' && queue[j + 1] == 'G')
            {
                queue[j] = 'G';
                queue[j + 1] = 'B';
                j++;
            }
        }

    }
    cout << queue;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
