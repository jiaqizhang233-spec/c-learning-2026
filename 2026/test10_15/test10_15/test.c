#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int fac(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return fac(n - 1) * n;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = fac(n);
//	printf("%d", r);
//	return 0;
//}//阶乘的递归算法
//void Printf(size_t n)
//{
//	if (n > 9)
//		Printf(n / 10);
//	printf("%zu ", n % 10);
//}
//
//int main()
//{
//	size_t num = 0;
//	scanf("%zu", &num);
//	Printf(num);
//	return 0;
//}
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = fib(n);
//	printf("%d",r);
//	return 0;
//}递归实现斐波那契数（效率低）
//循环的方式
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = fib(n);
	printf("%d", r);
	return 0;
}