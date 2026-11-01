#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0;i < 10;i++)
//	{
//		arr[i] = i;
//
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for (n = 1;n <= 3;n++)
//	{
//		int set = 1;
//		for (i = 1;i <= n;i++)
//		{
//			set *= i;
//		}
//		sum += set;
//	}
//	
//	printf("%d", sum);
//	return 0;
////}
//int main()//阶乘加法的优化算法
//{
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1;i <= 3;i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//阶乘的递归算法
int fac(int n)
{
	if (n == 0)
		return 1;
	else
		return fac(n - 1) * n;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = fac(n);
	printf("%d", r);
}