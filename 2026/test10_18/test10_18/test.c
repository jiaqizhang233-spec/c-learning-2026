#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = -10;
//	int b = a >> 1;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前，a = %d b = %d\n", a, b);
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后，a = %d b = %d\n", a, b);
//	
//	return 0;
//}//不创建第三个变量实现两个整数的交换
//int main()
//{
//	int num = 0;
//	int court = 0;
//	int i = 0;
//	scanf("%d", &num);
//	/*while (num)
//	{
//		if ((num % 2) == 1)
//		{
//			court++;
//		}
//		num /= 2;
//	}*///算法1
//	/*for (i = 0;i < 32;i++)
//	{
//		
//		if (((num >> i) & 1) == 1)
//		{
//			court++;
//		}
//	}*/
//	while (num)
//	{
//		num = num & (num - 1);
//		court++;
//	}
//	printf("%d", court);
//	return 0;
//
//}//算法2
struct student
{
	char name[20];
	int age;
	float score;

};