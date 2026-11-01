#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
void Initboard(char board[ROWS][COLS],int r,int c,char set);
void Displayboard(char board[ROWS][COLS], int r, int c);
#include <stdio.h>
void SetMine(char board[ROWS][COLS], int r, int c);
#include <stdlib.h>
#include <time.h>
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c);
#define EASY_COUNT 10