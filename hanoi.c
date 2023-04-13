#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"hanoi.h"


int main()
{
	int i = 4;
	printf("请输入盘片数：");
	scanf("%d", &i);
	printf("移动%d个盘片步骤如下：\n", i);
	Hanoi(i, 'A', 'B', 'C');
	return 0;
}

void Hanoi(int n, char one, char two, char three)
{
	if (n == 1)
		Move(one, three);
	else
	{
		Hanoi(n - 1, one, three, two);
		Move(one, three);
		Hanoi(n - 1, two, one, three);
	}
}

void Move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}