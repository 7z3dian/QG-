#include"ջ��.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main() {
	title();
	LinkStack* L=(LinkStack*)malloc(sizeof(LinkStack));
	L->count = 0;
	L->top = NULL;
	int number;
	int pushNum;
	int popNum;
	char b[10];
	char a;
	int findtop=1;
	do
	{
		system("cls");
		title();
		printf("����a��g��ѡ��\n");
		while (1)  // ѭ����������ֵ�Ƿ���ȷ
		{
			scanf("%s", &b);
			if (b[0] > 'g' || b[0] < 'a') {
				printf("��������ȷ��ĸ��a~g��\n");
				continue;
			}
			a = b[0] + b[1];//�ų��ַ��������쳣
			if (a > 'g' || a < 'a')
			{
				printf("��������ȷ��ĸ��a~g��\n");
				continue;    // ���벻��ȷ����������
			}
			else
			{
				break; // ������ȷ���˳�ѭ��
			}
		}
		switch (a)
		{
		case 'a':
			system("cls");
			printf("\t\t----------          ������ջ��          ---------\n");
			L = initLStack(L);
			if (L->top == NULL)
				printf("�����ͷ��ڴ�\n");
			else
				printf("����ջ���ɹ�\n");
			system("pause");
			break;
		case 'b':
			system("cls");
			printf("\t\t----------          �õ�ջ��Ԫ��          ---------\n");
			number=isEmptyLStack(L);
			if (number == 0)
			{
				printf("�봴��ջ��\n");
				system("pause");
				break;
			}
			printf("ջ��Ԫ��Ϊ%d\n", L->top->data);
			system("pause");
			break;
		case 'c':
			system("cls");
			printf("\t\t----------         ���ջ          ---------\n");
			number = isEmptyLStack(L);
			if (number == 0)
			{
				printf("�봴��ջ��\n");
				system("pause");
				break;
			}
			clearLStack(L);
			printf("����ɹ�\n");
			system("pause");
			break;
		case 'd':
			system("cls");
			printf("----------          ����ջ         ----------\n");
			number = isEmptyLStack(L);
			if (number == 0)
			{
				printf("�봴��ջ��\n");
				system("pause");
				break;
			}
			destroyLStack(L);
			printf("���ٳɹ��������½�������\n");
			system("pause");
			break;
		case 'e':
			system("cls");
			printf("-------------       ��ջ      --------------\n");
			number = isEmptyLStack(L);
			if (number == 0)
			{
				printf("�봴��ջ��\n");
				system("pause");
				break;
			}
			scanf("%d", &pushNum);
			pushLStack(L, pushNum);
			system("pause");
			break;
		case 'f':
			system("cls");
			printf("\t\t----------           ��ջ          ---------\n");
			number = isEmptyLStack(L);
			if (number == 0)
			{
				printf("�봴��ջ��\n");
				system("pause");
				break;
			}
			popNum=popLStack(L);
			printf("������ջ����Ϊ%d\n", popNum);
			system("pause");
			break;

		case 'g':
			system("cls");
			printf("\t\t----------           ���ջ����           ---------\n");
			number = isEmptyLStack(L);
			if (number == 0)
			{
				printf("�봴��ջ��\n");
				system("pause");
				break;
			}
			printf("ջ�ĳ���Ϊ%d\n", LStackLength(L));
			system("pause");
			break;
		}
	} while (a != 0);
}
