// Uoc so.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Nhap mot so";
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0)
			cout << "Uoc la " << i <<" " << endl;
	}
	return 0;

}
