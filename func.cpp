#define LIB_EXPORT
#include <iostream>
#include "funcLib.h"

using namespace std;

int findNum(int* a, int n)
{
	int num, temp, max;
	num = a[0];
	max = 1;
	for (int i = 0; i < n; i++) {
		temp = 1;
		for (int k = i + 1; k < n; k++)
			if (a[i] == a[k])
				temp += 1;
		if (temp > max) {
			max = temp;
			num = a[i];
		}
	}
	int rez = 0;
	if (max > 1)
		rez = num;
	else
		flag = true;

	return rez;
}