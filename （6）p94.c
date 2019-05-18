#include<stdio.h> 
/*入队*/
void enQueue(LNode *rear,int x) 
/*rear 是带头结点的循环链对的尾指针，算法将元素x插入到队尾*/
{
	LNode  *s = (LNode *)malloc(sizeof(LNode)) ;
	s->data = x;
	s->next = rear->next;  //将s结点链入队尾 
	rear->next = s;
	rear =s ;      //rear指向新的队尾 
}
/*出队*/
int deQueue(LNode *rear,int x) 
{
	LNode *s;
	if(rear->next ==rear) 
		return 0;
	else
	{
		s = rear->next->next;      //s指向开始结点 
		rear->next->next = s->next;//对头元素出队 
		x  = s->data;
		if(s==rear)        //如果元素出队后队列为空，则需要特殊处理 
			rear = rear->next;  //rear指向新结点 
		free(s);
		return 1;      //操作成功返回1 
	}
}
int main(void)
{
	return 0;
}
