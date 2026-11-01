#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void print(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j < c;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("--------------------------------\n");
	printf("-----     1.add     2.sub   ----\n");
	printf("-----     3.mul     4.div   ----\n");
	printf("-----          0.exit       ----\n");
	printf("--------------------------------\n");
}
int main()
{
	int x = 0;
	int y = 0;
	int r = 0;
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		int(*parr[])(int, int) = { NULL, Add, Sub, Mul, Div };
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数：");
			scanf("%d %d", &x, &y);
			r = parr[input](x, y);
			printf("结果是：%d\n", r);
		}
		else if (input == 0)
			printf("退出计算器\n");
		else
			printf("输入错误，请重新输入\n");
	} while (input);
	return 0;
}