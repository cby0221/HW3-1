#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int power(int base, int exponent);
int main()
{
	int b, e;
	printf("�п�J����:");
	scanf_s("%d", &b);
	printf("�п�J����:");
	scanf_s("%d", &e);
	int result = power(b, e);
	printf("%d��%d���謰%d", b, e, result);
}
int power(int base, int exponent)
{
	int i;
	int result = 1 * base;
	for (i = 1; i < exponent; i++)
	{
		 result = result * base;
	}
	return result;
}