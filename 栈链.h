#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef enum Status
{
	ERROR = 0,
	SUCCESS = 1
} Status;

typedef int ElemType;

typedef  struct StackNode//ջ��
{
	ElemType data;
	struct StackNode* next;
}StackNode, * LinkStackPtr;

typedef  struct  LinkStack//��¼վ����
{
	LinkStackPtr top;
	int	count;
}LinkStack;



//��ջ
LinkStack* initLStack(LinkStack* s);//��ʼ��ջ
Status isEmptyLStack(LinkStack* s);//�ж�ջ�Ƿ�Ϊ��
void clearLStack(LinkStack* s);//���ջ
void destroyLStack(LinkStack* s);//����ջ
int LStackLength(LinkStack* s);//���ջ����
void pushLStack(LinkStack* s, ElemType data);//��ջ
int popLStack(LinkStack* s);//��ջ
#endif 
