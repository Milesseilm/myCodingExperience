#include<iostream>
using namespace std;
void coutBlank(int n) {
	for (int i = 1;i <= n;i++) {
		cout << " ";
	}
}
void coutNum(int n) {
	static int arr[100][100] = { 0 };
	arr[n][1] = 1;
	arr[n][n] = 1;
	for(int i=2;i<n;i++){
		arr[n][i] = arr[n - 1][i - 1] + arr[n - 1][i];
	}
	for (int j = 1;j <= n;j++) {
		cout << arr[n][j] << " ";
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		coutBlank(n-i);
		coutNum(i);
		cout << endl;
	}
	return 0;
}