#include "ջ��.h"
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//��ջ
void title()//��ӡ���ܲ˵�
{
	printf("\t*********************ϵͳ���ܲ˵�***************\n");
	printf("\t------------------------------------------------\n");
	printf("\t***********************************************\n");
	printf("\t*  a.������ջ��       * *    b.�õ�ջ��Ԫ��     *\n");
	printf("\t***********************************************\n");
	printf("\t*  c.���ջ         * *    d.����ջ     *\n");
	printf("\t***********************************************\n");
	printf("\t*  e.��ջ              * *    f.��ջ              *\n");
	printf("\t***********************************************\n");
	printf("\t*                g.���ջ����               *\n");
	printf("\t***********************************************\n");
}
//��ʼ��ջ
LinkStack* initLStack(LinkStack* s) {
	s->top = (LinkStackPtr)malloc(sizeof(StackNode));
	s->top->data = -1;
	s->top->next = NULL;
	if ( s->top == NULL) {
		return NULL;
	}
	else return s;
}

//�ж�ջ�Ƿ�Ϊ��
Status isEmptyLStack(LinkStack* s) {
	if (s->top == NULL) {
		return ERROR;
	}
	else return SUCCESS;

}

//���ջ
void clearLStack(LinkStack* s) {
	LinkStackPtr a = (LinkStackPtr)malloc(sizeof(StackNode));
	a->next = NULL;
	s->top= a;
}

//����ջ
void destroyLStack(LinkStack* s) {
	LinkStackPtr a = (LinkStackPtr)malloc(sizeof(StackNode));
	a = s->top;
	while(a) {
		LinkStackPtr b = a->next;
		free(a);
		a = b;
	}
}

//���ջ����
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

//��ջ
void pushLStack(LinkStack* s, ElemType data) {
	LinkStackPtr p;
	p = (LinkStackPtr)malloc(sizeof(StackNode));
	if (!p) {
		printf("����ʧ��\n");
		return;
	}    /* ����ռ�ʧ�� */
	p->data = data;
	p->next = s->top;
	s->top = p;    /* �޸ĵ�ǰջ��ָ�� */
}

//��ջ
int popLStack(LinkStack* s) {
	int a = s->top->data;
	s->top = s->top->next;
	return a;
}
