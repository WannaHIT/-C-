#include<stdio.h> 
#include<stdlib.h>
#define maxSize 100
 /*˳�����*/
typedef struct{
	int data[maxSize];
	int front;          //����ָ�� 
	int rear;			//��βָ�� 
}SqQueue,*PQueue; 

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
/*��ʼ������*/
void initQueue(PQueue qu)
{
	qu->front= qu->rear =0;//����ָ��Ͷ�βָ���غϣ�����ָ��0 
}
/*�ж϶ӿ�*/
int isQueueEmpty(PQueue qu) 
{
	if(qu->front==qu->rear)/*����ָ�����ֻҪ�����غϼ�Ϊ�ӿ�*/
		return 1;
	else
		return 0; 
}
/*����*/
int enQueue(PQueue qu,int x)
{
	if((qu->rear+1)%maxSize == qu->front)//�����Ͳ������ 
		return 0;
	qu->rear = (qu->rear+1)%maxSize;   //��δ�����������ƶ�ָ�� 
	qu->data[qu->rear] = x;            //�ٴ���Ԫ�� 
	return 1;
}
/*����*/
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


 
