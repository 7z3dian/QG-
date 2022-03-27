#include"栈链.h"
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
		printf("请在a到g中选择：\n");
		while (1)  // 循环检查输入的值是否正确
		{
			scanf("%s", &b);
			if (b[0] > 'g' || b[0] < 'a') {
				printf("请输入正确字母（a~g）\n");
				continue;
			}
			a = b[0] + b[1];//排除字符串输入异常
			if (a > 'g' || a < 'a')
			{
				printf("请输入正确字母（a~g）\n");
				continue;    // 输入不正确，重新输入
			}
			else
			{
				break; // 输入正确，退出循环
			}
		}
		switch (a)
		{
		case 'a':
			system("cls");
			printf("\t\t----------          创建新栈链          ---------\n");
			L = initLStack(L);
			if (L->top == NULL)
				printf("请先释放内存\n");
			else
				printf("创建栈链成功\n");
			system("pause");
			break;
		case 'b':
			system("cls");
			printf("\t\t----------          得到栈顶元素          ---------\n");
			number=isEmptyLStack(L);
			if (number == 0)
			{
				printf("请创建栈链\n");
				system("pause");
				break;
			}
			printf("栈顶元素为%d\n", L->top->data);
			system("pause");
			break;
		case 'c':
			system("cls");
			printf("\t\t----------         清空栈          ---------\n");
			number = isEmptyLStack(L);
			if (number == 0)
			{
				printf("请创建栈链\n");
				system("pause");
				break;
			}
			clearLStack(L);
			printf("清除成功\n");
			system("pause");
			break;
		case 'd':
			system("cls");
			printf("----------          销毁栈         ----------\n");
			number = isEmptyLStack(L);
			if (number == 0)
			{
				printf("请创建栈链\n");
				system("pause");
				break;
			}
			destroyLStack(L);
			printf("销毁成功，请重新建立链表\n");
			system("pause");
			break;
		case 'e':
			system("cls");
			printf("-------------       入栈      --------------\n");
			number = isEmptyLStack(L);
			if (number == 0)
			{
				printf("请创建栈链\n");
				system("pause");
				break;
			}
			scanf("%d", &pushNum);
			pushLStack(L, pushNum);
			system("pause");
			break;
		case 'f':
			system("cls");
			printf("\t\t----------           出栈          ---------\n");
			number = isEmptyLStack(L);
			if (number == 0)
			{
				printf("请创建栈链\n");
				system("pause");
				break;
			}
			popNum=popLStack(L);
			printf("弹出的栈数据为%d\n", popNum);
			system("pause");
			break;

		case 'g':
			system("cls");
			printf("\t\t----------           检测栈长度           ---------\n");
			number = isEmptyLStack(L);
			if (number == 0)
			{
				printf("请创建栈链\n");
				system("pause");
				break;
			}
			printf("栈的长度为%d\n", LStackLength(L));
			system("pause");
			break;
		}
	} while (a != 0);
}
