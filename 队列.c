#include<stdio.h> 
#include<stdlib.h>
#define maxSize 100
 /*顺序队列*/
typedef struct{
	int data[maxSize];
	int front;          //队首指针 
	int rear;			//队尾指针 
}SqQueue,*PQueue; 

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
/*初始化队列*/
void initQueue(PQueue qu)
{
	qu->front= qu->rear =0;//队首指针和队尾指针重合，并且指向0 
}
/*判断队空*/
int isQueueEmpty(PQueue qu) 
{
	if(qu->front==qu->rear)/*不论指向哪里，只要两者重合即为队空*/
		return 1;
	else
		return 0; 
}
/*进队*/
int enQueue(PQueue qu,int x)
{
	if((qu->rear+1)%maxSize == qu->front)//队满就不能入队 
		return 0;
	qu->rear = (qu->rear+1)%maxSize;   //若未队满，则先移动指针 
	qu->data[qu->rear] = x;            //再存入元素 
	return 1;
}
/*出队*/
int deQueue(PQueue qu,int x)
{
	if(qu->front==qu->rear)
		return 0;
	qu->front = (qu->front+1)%maxSize;
	x = qu->data[qu->front];
	return 1;
}
int main(void)
{
	return 0;
}


 
