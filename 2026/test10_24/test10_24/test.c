#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//size_t my_strlen(char *p)
//{
//	char* start = p;
//	while (*p != '\0')
//		p++;
//	return p - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zu", len);
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (p < &arr[sz])
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}