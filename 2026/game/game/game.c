#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void Initboard(char board[ROWS][COLS], int r, int c,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < r;i++)
	{
		for (j = 0;j < c;j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int r, int c)
{
	int i = 0;
	int j = 0;
	for (j = 0;j <= 9;j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= r; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int r, int c)
{
	int court = EASY_COUNT;
	while (court)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			court--;
		}
	}
}
static size_t GetMineCourt(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] +
		mine[x - 1][y + 1] + mine[x][y - 1] +
		mine[x][y + 1] +  mine[x + 1][y - 1]+ 
		mine[x + 1][y] + mine[x + 1][y + 1] - 8*'0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < r*c - EASY_COUNT)
	{
		printf("请输入你要排查的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标已经排查过，无需排查\n");
			}
			else
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了\n");
					Displayboard(mine, ROW, COL);
					break;
				}
				else
				{
					size_t court = GetMineCourt(mine, x, y);
					show[x][y] = (char)court + '0';
					Displayboard(show, ROW, COL);
					win++;
				}
			}
			
		}
		else
		{
			printf("输入的坐标非法，重新输入");
		}
	}
	if (win == r * c - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		Displayboard(show, ROW, COL);
	}
}