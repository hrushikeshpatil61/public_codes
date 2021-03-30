// codeforces.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int main()
{

	int num,i,j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			cin >> num;
			if (num == 1)
				break;
		}
		if (num == 1)
			break;
   }
	cout << abs(i-2) + abs(j-2);
}
