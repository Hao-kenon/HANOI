#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"hanoi.h"


int main()
{
	int i = 4;
	printf("��������Ƭ����");
	scanf("%d", &i);
	printf("�ƶ�%d����Ƭ�������£�\n", i);
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