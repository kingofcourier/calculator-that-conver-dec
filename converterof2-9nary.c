#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

double CONVERT(int num, int data[], int n);
int main(void) {
	int data[100] = { 0 };
	int num;
	double b;
	int n;
	scanf("%d", &num);
	scanf("%d", &n);
	b = CONVERT(num, data,n);
	printf("%f", b);

	system("pause");
	return 0;
}



double CONVERT(int num, int data[], int n)
{
	double exp = 0.0;
	double b;
	double base_exp;
	int index;
	int m = n - 1;
		for (index = 0; num > m; index++)
		{
			data[index] = num % n;
			num = (num - (num % n)) / n;
			exp++;
		}

		b = pow(10.0*num, exp);
	exp--;
	for (index--; exp >= 0; exp--, index--)
		b += data[index] * pow(10.0, exp);
	return b;
}