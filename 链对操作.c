#include<stdio.h> 
#include<stdlib.h>

/*�ӽ�����Ͷ���*/
typedef struct QNode{
	int data;            //������ 
	struct QNode *next;  //ָ���� 
}QNode; 
/*�������Ͷ���*/
typedef struct{
	QNode *front;      //����ָ�� 
	QNode *rear;		//��βָ�� 
}LiQueue,*Queue;             //�������Ͷ���

/*��ʼ������*/
void initQueue(Queue qu) 
{
	qu = (Queue)malloc(sizeof(LiQueue));
	qu->front = qu->rear=NULL;
}
/*�ж϶ӿ�*/
int isQueueEmpty(Queue qu) 
{
	if(qu->front==NULL && qu->rear==NULL)
		return 1;
	else 
		return 0;
}
/*���*/
void enQueue(Queue qu,int x)
{
	QNode *p;
	p = (QNode*)malloc(sizeof(QNode)) ;  //ע���Ƕӽ��QNode �������� 
	p->data = x;
	p->next=NULL;
	if(qu->rear==NULL)         //���ӿգ����½���Ƕ��׽ڵ㣬Ҳ�Ƕ�β���
		qu->front=qu->rear=p;
	else{
		qu->rear->next = p;
		qu->rear=p;
	} 
}
/*����*/
int deQueue(Queue qu,int x)
{
	QNode *p;
	p = (QNode *)malloc(sizeof(QNode));
	p->next=NULL;
	if(qu->rear==NULL)  //�ӿ��޷����� 
	{
		return 0;
	}
	else{
		p = qu->front;
	} 
	if(qu->front==qu->rear){     //����ֻ��һ������ʱ����Ҫ���⴦�� 
		qu->rear=qu->front=NULL;
	}
	else{
		qu->front = p->next;
	}
	x=p->data;
	free(p);
	return 1;
}
int main(void) 
{
	return 0;
}
















