#include<stdio.h> 
/*���*/
void enQueue(LNode *rear,int x) 
/*rear �Ǵ�ͷ����ѭ�����Ե�βָ�룬�㷨��Ԫ��x���뵽��β*/
{
	LNode  *s = (LNode *)malloc(sizeof(LNode)) ;
	s->data = x;
	s->next = rear->next;  //��s��������β 
	rear->next = s;
	rear =s ;      //rearָ���µĶ�β 
}
/*����*/
int deQueue(LNode *rear,int x) 
{
	LNode *s;
	if(rear->next ==rear) 
		return 0;
	else
	{
		s = rear->next->next;      //sָ��ʼ��� 
		rear->next->next = s->next;//��ͷԪ�س��� 
		x  = s->data;
		if(s==rear)        //���Ԫ�س��Ӻ����Ϊ�գ�����Ҫ���⴦�� 
			rear = rear->next;  //rearָ���½�� 
		free(s);
		return 1;      //�����ɹ�����1 
	}
}
int main(void)
{
	return 0;
}
