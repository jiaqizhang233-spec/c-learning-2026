#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int score = 0;
	printf("请输入成绩：");
	scanf("%d", &score);
	printf("成绩是：%d\n", score);
	return 0;
}