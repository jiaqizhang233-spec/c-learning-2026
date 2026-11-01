#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//void game()
//{
//    int guess = 0;
//    int r = rand() % 100 + 1;
//    int court = 5;
//    while (court)
//    {
//        printf("你还有%d次机会\n", court);
//        printf("请猜数字：");
//        scanf("%d", &guess);
//
//        if (guess < r)
//        {
//            printf("猜小了\n");
//        }
//        else if (guess > r)
//        {
//            printf("猜大了\n");
//        }
//        else
//        {
//            printf("猜对了\n");
//            break;
//        }
//        court = --court;
//
//    }
//    if (court == 0)
//        printf("很遗憾，五次机会已使用完\n");
//}
//
//
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));
//
//    do
//    {
//        printf("------------------------\n");
//        printf("-----   1.play    ------\n");
//        printf("-----   0.exit    ------\n");
//        printf("------------------------\n");
//        printf("请选择：");
//
//        scanf("%d", &input);
//
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//
//        case 0:
//            printf("退出游戏\n");
//            break;
//
//        default:
//            printf("选择错误，重新选择\n");
//            break;
//        }
//
//    } while (input);
//
//    return 0;
//}
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//void game()
//{
//    int guess = 0;
//    int r = rand() % 100 + 1;
//
//    while (1)
//    {
//        printf("guess:");
//        scanf("%d", &guess);
//
//        if (guess < r)
//        {
//            printf("small\n");
//        }
//        else if (guess > r)
//        {
//            printf("big\n");
//        }
//        else
//        {
//            printf("correct\n");
//            break;
//        }
//    }
//}
//
//int main()
//{
//    int input = 0;
//
//    srand((unsigned int)time(NULL));
//
//    do
//    {
//        printf("------------------------\n");
//        printf("-----   1.play    ------\n");
//        printf("-----   0.exit    ------\n");
//        printf("------------------------\n");
//        printf("choose:");
//
//        scanf("%d", &input);
//
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//
//        case 0:
//            printf("exit\n");
//            break;
//
//        default:
//            printf("error\n");
//            break;
//        }
//
//    } while (input);
//
//    return 0;
//}复盘：运行代码时应检查编码环境是否为UTF-8
//int main()
//{
//	int arr1[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//		scanf("%d", &arr1[i]);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zu\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//
//}
int main()
{
	int arr5[3][5] = {0};
	return 0;
}