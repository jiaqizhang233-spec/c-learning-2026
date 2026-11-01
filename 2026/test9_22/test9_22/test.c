#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	int i = 1;
//	for (i = 1;i <= 10;i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//
//	}
//	
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int flag = 1;//假设1是素数
//		int j = 0;
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
////}//试除法
//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//	next:
//	printf("heihei\n");
//	return 0;
//
//}
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
while (1)
	{
		printf("您的电脑将在60秒内关机，如果输入：pig，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "pig") == 0)
		{
			system("shutdown -a");
			printf("你很乖\n");
			break;

		}
	}
	return 0;
}