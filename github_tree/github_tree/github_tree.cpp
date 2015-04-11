// github_tree.cpp : Defines the entry point for the console application.
//
/*! \file github_tree.cpp
\brief A Documented file.

Details.
*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void pram(int i, int n, int* a, int *b){
	int *k, y = n + 1;
	k = new int[n + 1];
	while (i > 0)
	{

		for (int j = i; j <= n; j++){
			if (a[j] == i & b[j] == 1){
				i = j;
				goto err;
			}
		}
	err:
		if (b[i] == 1)
		{
			cout << i << " "; /// vivodim obratnii
			b[i] = 0;
			k[y] = i;
			y--;
		}
		else {
			i = a[i];
		}
	}
	cout << endl;
	for (i = 2; i <= n + 1; i++) cout << k[i] << " "; /// vvivodim pramoi
}

int _tmain(int argc, _TCHAR* argv[])
{
	int *a, n, j;
	int *b;
	cout << "scolko usels \n";///vvodim kol-vo uzlov
	cin >> n;
	b = new int[n + 1];
	a = new int[n + 1];
	for (int i = 1; i <= n; i++) {///vvodim znachenia
		cout << "vvedite znach \n";
		cin >> a[i];
		b[i] = 1;
	}
	pram(1, n, a, b);///perebiraem yacheiki massiva
	_getch();
	return 0;
}
