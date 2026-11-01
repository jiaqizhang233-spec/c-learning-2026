#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 100;
//	int* p = &a;
//	printf("%d\n", *p);
//	*p = 10;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	printf("%zu", sizeof(char*));
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", arr[10]);
//
//	return 0;
//}
 size_t my_strlen(char* p)
{
	char* start = p;
	while (*p != '\0')
		p++;
	return p - start;
}
int main()
{
	char arr[] = "abcdef";
	size_t len = my_strlen(arr);
	printf("%zu", len);
	return 0;
}