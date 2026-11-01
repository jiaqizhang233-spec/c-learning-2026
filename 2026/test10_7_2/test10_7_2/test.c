#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
static int a;
void test()
{
	printf("2:a = %d\n", a);
}

int main()
{
	printf("1: a = %d\n", a);
	test();

	return 0;
}