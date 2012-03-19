//============================================================================
// Name        : faktorial.cpp
// Author      : ----
// Version     :  20:02
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,i;
	int f=1;
	cout << "Введіть число: ";
	cin >> n;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	cout << "Факторіал числа " << n << " рівний: " << f;
	return 0;
}
