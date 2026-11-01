#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int m = 1000;
//	int n = 10;
//	int* const p = &n;
//	//*p = 100;
//	//p = &m;
//	printf("%d", *p);
//}
//#define NDEBUG
#include <assert.h>
//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	assert(p != NULL);
//	printf("%d", *p);
//	return 0;
//}
//size_t my_strlen(const char* p)
//{
//	int count = 0;
//	assert(p != NULL);
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zu", len);
//
//	return 0;
//}
//void Swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a = %d b = %d\n", a, b);
//	return 0;
//}
void test(int* p, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	printf("sz1 = %d\n", sz1);
	test(arr, sz1);
	return 0;
}