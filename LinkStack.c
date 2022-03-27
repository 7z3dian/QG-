#include "栈链.h"
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//链栈
void title()//打印功能菜单
{
	printf("\t*********************系统功能菜单***************\n");
	printf("\t------------------------------------------------\n");
	printf("\t***********************************************\n");
	printf("\t*  a.创建新栈链       * *    b.得到栈顶元素     *\n");
	printf("\t***********************************************\n");
	printf("\t*  c.清空栈         * *    d.销毁栈     *\n");
	printf("\t***********************************************\n");
	printf("\t*  e.入栈              * *    f.出栈              *\n");
	printf("\t***********************************************\n");
	printf("\t*                g.检测栈长度               *\n");
	printf("\t***********************************************\n");
}
//初始化栈
LinkStack* initLStack(LinkStack* s) {
	s->top = (LinkStackPtr)malloc(sizeof(StackNode));
	s->top->data = -1;
	s->top->next = NULL;
	if ( s->top == NULL) {
		return NULL;
	}
	else return s;
}

//判断栈是否为空
Status isEmptyLStack(LinkStack* s) {
	if (s->top == NULL) {
		return ERROR;
	}
	else return SUCCESS;

}

//清空栈
void clearLStack(LinkStack* s) {
	LinkStackPtr a = (LinkStackPtr)malloc(sizeof(StackNode));
	a->next = NULL;
	s->top= a;
}

//销毁栈
void destroyLStack(LinkStack* s) {
	LinkStackPtr a = (LinkStackPtr)malloc(sizeof(StackNode));
	a = s->top;
	while(a) {
		LinkStackPtr b = a->next;
		free(a);
		a = b;
	}
}

//检测栈长度
int LStackLength(LinkStack* s) {
	int count = 0;
	LinkStackPtr a = (LinkStackPtr)malloc(sizeof(StackNode));
	a = s->top;
	while (a) {
		count++;
		a = a->next;
	}
	return count;
}

//入栈
void pushLStack(LinkStack* s, ElemType data) {
	LinkStackPtr p;
	p = (LinkStackPtr)malloc(sizeof(StackNode));
	if (!p) {
		printf("创建失败\n");
		return;
	}    /* 申请空间失败 */
	p->data = data;
	p->next = s->top;
	s->top = p;    /* 修改当前栈顶指针 */
}

//出栈
int popLStack(LinkStack* s) {
	int a = s->top->data;
	s->top = s->top->next;
	return a;
}
