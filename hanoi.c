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


//将n个盘片从one座，通过中转柱two移动到three座
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

//将一个盘片从x座移动到y座
void Move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}
