#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)
//		printf("青年\n");
//	else if (age <= 59)
//		printf("中老年\n");
//	else if (age <= 89)
//		printf("老年\n");
//	else
//		printf("老寿星");
//
//
//	return 0;
//}
//int main()
//{
//	int i = 3;
//	int j = 8;
//	int l = 5;
//	if (i < j < l)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = 0;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//
//}
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("冬天\n");
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//	{
//		printf("闰年");
//
//	}
//	else if (year % 4 == 0)
//	{
//		printf("闰年");
//	}
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;*/
//	b = (a > 5 ? 3 : -3);
//
//	printf("%d\n", b);
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = 0;
//
//		//if (a > b)
//		//	max = a;
//		//else
//		//	max = b;
//		//printf("%d", max);
//	max = (a > b ? a : b);
//	printf("%d", max);
//
//	return 0;
//
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//		printf("余数是0");
//		break;
//
//	case 1:
//		printf("余数是1");
//		break;
//	case 2:
//		printf("余数是2");
//		break;
//	default:
//		print("输入错误");
//		break;
//
//
//
//	}
//	return 0;
//}
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;

		printf("%d ", i);
		i++;
	}
	return 0;

//int main()
//{
//	/*scanf("%d", &num);*/
//	/*while (num)
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//
//	}*/
//	for (int i = 1;i <= 10; i++)
//	{
//		printf("%d", i);
//
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3;i <= 100;i+=3)
//	{
//		sum += i;
//
//	}
//	printf("%d", sum);
//
//	return 0;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//
//	do
//	{
//		n /= 10;
//		count++;
//	} while (n);
//	printf("%d", count);
//
//	return 0;
//
//}