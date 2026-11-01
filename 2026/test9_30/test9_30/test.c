#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
bool is_leap_year(int y)
{
	if ((y % 4 == 0) && (y % 100 != 0)|| (y % 400 == 0))
		return true;
	else
		return false;
}
int get_days_of_month(int y, int m)
{
	int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int d = days[m];
	if (is_leap_year(y) && m == 2)
	{
		d += 1;
	}
	return d;
}

int main()
{
	int year = 0;
	int month = 0;
	scanf("%d%d", &year, &month);
	int day = get_days_of_month(year, month);
	printf("%d\n", day);
	return 0;

}