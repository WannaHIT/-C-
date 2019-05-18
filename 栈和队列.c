/*˳��ջ����*/
#include<stdio.h> 
#include<stdlib.h> 
#define MaxSize 100
typedef struct{
	int data[MaxSize];
	int top;         //ջ��ָ�� 
}SqStack,*PtrTost;            //˳��ջ���Ͷ���

/*ջ������*/
typedef struct LNode{
	int data;            //������ 
	struct LNode *next;// ָ���� 
}LNode,*Stack; 

/*˳�����*/
typedef struct{
	int data[MaxSize];
	int front;          //����ָ�� 
	int rear;			//��βָ�� 
}SqQueue; 

/*���Ӷ���*/

/*�ӽ�����Ͷ���*/
typedef struct QNode{
	int data;            //������ 
	struct QNode *next;  //ָ���� 
}QNode; 
/*�������Ͷ���*/
typedef struct{
	QNode *front;      //����ָ�� 
	QNode *rear;		//��βָ�� 
}LiQueue;             //�������Ͷ���

/*��ʼ��ջΪ��*/
void initStack(PtrTost st) 
{
	st->top==-1;
}
/*�ж�ջ�Ƿ�Ϊ��*/
int IsEmpty(SqStack st) 
{
	if(st.top==-1)
		return 1;//���򷵻�1
	else 
		return 0; 
}
/*��ջ*/
int Push(PtrTost st,int x) 
{
	if(st->top==MaxSize-1)        //���ջ���Ͳ�����ջ 
		return 1; 
	++(st->top) ;                  //���ƶ�ָ������ջ 
	st->data[st->top] = x;
	return 1;
}
/*��ջ*/
int pop(PtrTost st,int *x)
{
	if(st->top==-1)              //���ջ�����ܳ�ջ 
		return 1;
	*x = st->data[st->top];        //��ȡ��Ԫ�أ����ƶ�ָ�� 
	--(st->top);
	return 1;
}

/*��ջ*/
/*��ջ�ĳ�ʼ��*/
void initstack(Stack s ) 
{
	s =(Stack)malloc(sizeof(LNode));  //����ͷ��� 
	s->next =NULL;
} 

/*�жϿ�*/
int isEmpty1(Stack s)
{
	if(s->next==NULL)
		return 1;
	else 
		return 0;
}
/*��ջ*/
void push(Stack s,int x) 
{
	Stack p;
	p =(Stack)malloc(sizeof(LNode)); 
	p->next=NULL;       /*��䲻дҲ��ȷ������ÿ�������½���ʱ�򣬽���ָ��������ΪNULL�Ǹ�
						�������ĺ�ϰ��	*/ 
	/*��������ͷ�巨*/
	p->data = x;
	p->next = s->next;
	s->next = p;
}

/*��ջ*/
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






