/*顺序栈定义*/
#include<stdio.h> 
#include<stdlib.h> 
#define MaxSize 100
typedef struct{
	int data[MaxSize];
	int top;         //栈顶指针 
}SqStack,*PtrTost;            //顺序栈类型定义

/*栈链表定义*/
typedef struct LNode{
	int data;            //数据域 
	struct LNode *next;// 指针域 
}LNode,*Stack; 

/*顺序队列*/
typedef struct{
	int data[MaxSize];
	int front;          //队首指针 
	int rear;			//队尾指针 
}SqQueue; 

/*链队定义*/

/*队结点类型定义*/
typedef struct QNode{
	int data;            //数据域 
	struct QNode *next;  //指针域 
}QNode; 
/*链对类型定义*/
typedef struct{
	QNode *front;      //队首指针 
	QNode *rear;		//队尾指针 
}LiQueue;             //链对类型定义

/*初始化栈为空*/
void initStack(PtrTost st) 
{
	st->top==-1;
}
/*判断栈是否为空*/
int IsEmpty(SqStack st) 
{
	if(st.top==-1)
		return 1;//空则返回1
	else 
		return 0; 
}
/*入栈*/
int Push(PtrTost st,int x) 
{
	if(st->top==MaxSize-1)        //如果栈满就不能入栈 
		return 1; 
	++(st->top) ;                  //先移动指针再入栈 
	st->data[st->top] = x;
	return 1;
}
/*出栈*/
int pop(PtrTost st,int *x)
{
	if(st->top==-1)              //如果栈空则不能出栈 
		return 1;
	*x = st->data[st->top];        //先取出元素，再移动指针 
	--(st->top);
	return 1;
}

/*链栈*/
/*链栈的初始化*/
void initstack(Stack s ) 
{
	s =(Stack)malloc(sizeof(LNode));  //制造头结点 
	s->next =NULL;
} 

/*判断空*/
int isEmpty1(Stack s)
{
	if(s->next==NULL)
		return 1;
	else 
		return 0;
}
/*入栈*/
void push(Stack s,int x) 
{
	Stack p;
	p =(Stack)malloc(sizeof(LNode)); 
	p->next=NULL;       /*这句不写也正确，但是每当申请新结点的时候，将其指针域设置为NULL是个
						避免错误的好习惯	*/ 
	/*就是链表头插法*/
	p->data = x;
	p->next = s->next;
	s->next = p;
}

/*出栈*/
int Pop(Stack s,int *x) 
{
	Stack p;
	if(s->next==NULL)
		return 0;
	/**/
	p = s->next;
	*x = p->data;
	s->next = p->next;
	free(p);
	return 1;
}
int main(void) 
{
	return 0;
}






