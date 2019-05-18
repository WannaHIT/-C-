#include<stdio.h> 
#include<stdlib.h>

/*队结点类型定义*/
typedef struct QNode{
	int data;            //数据域 
	struct QNode *next;  //指针域 
}QNode; 
/*链对类型定义*/
typedef struct{
	QNode *front;      //队首指针 
	QNode *rear;		//队尾指针 
}LiQueue,*Queue;             //链对类型定义

/*初始化链对*/
void initQueue(Queue qu) 
{
	qu = (Queue)malloc(sizeof(LiQueue));
	qu->front = qu->rear=NULL;
}
/*判断队空*/
int isQueueEmpty(Queue qu) 
{
	if(qu->front==NULL && qu->rear==NULL)
		return 1;
	else 
		return 0;
}
/*入队*/
void enQueue(Queue qu,int x)
{
	QNode *p;
	p = (QNode*)malloc(sizeof(QNode)) ;  //注意是队结点QNode 不是链对 
	p->data = x;
	p->next=NULL;
	if(qu->rear==NULL)         //若队空，则新结点是队首节点，也是对尾结点
		qu->front=qu->rear=p;
	else{
		qu->rear->next = p;
		qu->rear=p;
	} 
}
/*出队*/
int deQueue(Queue qu,int x)
{
	QNode *p;
	p = (QNode *)malloc(sizeof(QNode));
	p->next=NULL;
	if(qu->rear==NULL)  //队空无法出队 
	{
		return 0;
	}
	else{
		p = qu->front;
	} 
	if(qu->front==qu->rear){     //队列只有一个结点的时候需要特殊处理 
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
















