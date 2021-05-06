#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	int ans[5][5] = { 1 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] != 0 && (arr[i][j]) % 2 == 1) {
				for (int l = j; l < j + 3; l++) {
					ans[i+1][l] = (ans[i+1][l] + 1) % 2;
				}
				ans[i][j+1] = (ans[i][j + 1] + 1) % 2;
				ans[i+2][j + 1] = (ans[i+2][j + 1] + 1) % 2;
			}
		}
	}
	for (int i = 2; i < 5; i++) {
		for (int j = 2; j < 5; j++) {
			cout << ans[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;

	
}
