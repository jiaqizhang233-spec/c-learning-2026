#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int i = 0;
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			scanf("%d", &arr[i][j]);
//
//		}
//	}
//	
//	for (i = 0;i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to HNU";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = (int)strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了,下标是%d",i);
//			break;
//		}
//		if (sz == i)
//			printf("找不到了");
//	}
//	return 0; 
//}//遍历算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = INT_MAX;
//	int b = INT_MAX;
//	printf("%d", (b - a) / 2 + a);
//
//}//平均数的优化算法
//int add(int x,int y)//函数的定义
//{
//	int z = x + y;
//	return z;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = add(a, b);//调用函数
//	printf("%d", c);
//	return 0;
//
//}
//int is_leep_year(int y)
//{
//	if ((y % 4 == 0)&&(y % 100 != 0 )||(y % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int year = 0;
//	scanf("%d",&year);
//	if (is_leep_year(year) == 1)//注意要写实参
//		printf("是闰年");
//	else
//		printf("不是闰年");
//	return 0;
//}
//void test()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n == -1)
//		return;
//	printf("%d\n", n);
//
//}
//int main()
//{
//	test();
//	return 0;
//
//}
//void set_arr(int arr2[10],int sz2)
//{
//	int i = 0;
//	for (i = 0;i < sz2;i++)
//	{
//		arr2[i] = -1;
//
//	}
//}
//void printf_arr(int arr2[10], int sz2)
//{
//	int i = 0;
//	for (i = 0;i < sz2;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf_arr(arr, sz);
//	set_arr(arr, sz);
//	printf_arr(arr, sz);
//
//	return 0;
//
//}//用函数设置数组元素并打印
void set_arr(int arr[3][5],int r,int c)
{
	int i = 0;
	for (i = 0;i < r;i++)
	{
		int j = 0;
		for (j = 0;j < c;j++)
		{
			arr[i][j] = i + j;
		}
	}
}
void printf_arr(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0;i < r;i++)
	{
		int j = 0;
		for (j = 0;j < c;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	
	}
}
int main()
{
	int arr[3][5] = { 0 };
	set_arr(arr, 3, 5);
	printf_arr(arr, 3, 5);
	return 0;
}