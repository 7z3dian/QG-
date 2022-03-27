#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef enum Status
{
	ERROR = 0,
	SUCCESS = 1
} Status;

typedef int ElemType;

typedef  struct StackNode//栈链
{
	ElemType data;
	struct StackNode* next;
}StackNode, * LinkStackPtr;

typedef  struct  LinkStack//记录站数量
{
	LinkStackPtr top;
	int	count;
}LinkStack;



//链栈
LinkStack* initLStack(LinkStack* s);//初始化栈
Status isEmptyLStack(LinkStack* s);//判断栈是否为空
void clearLStack(LinkStack* s);//清空栈
void destroyLStack(LinkStack* s);//销毁栈
int LStackLength(LinkStack* s);//检测栈长度
void pushLStack(LinkStack* s, ElemType data);//入栈
int popLStack(LinkStack* s);//出栈
#endif 
