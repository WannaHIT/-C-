/*s1Ϊ����ջ�����ѹ�룬ģ����ӡ�����Ҫ����ʱ�������s1��ջ�����ѹ��s2�У�
��ȫ����ջ��ģ���˳��ӣ�ʵ�����Ƚ��ȳ����ԣ�������ջ��Ϊ��ʱ�����Ƕӿ�*/
typedef struct{
	int data[MaxSize];
	int top;         //ջ��ָ�� 
}SqStack,*Stack; 
int enQueue(Stack s1,Stack s2,int x) 
/*s1������ΪmaxSize��ջ���㷨��x��ջ�����ɹ��򷵻�1�����򷵻�0*/
{
	int y;
	if(s1->top==maxSize-1){      /*��s1������s2�Ƿ�Ϊ��*/
		if(!isEmpty(s2))
			return 0;            /*s1��s2�ǿգ���ʱs1��������ջ������0*/
		else if(isEmpty(s2)){     /*��s2Ϊ�գ���s1��ջ��Ԫ��ѹջ��s2*/
			while(!isEmpty(s1)){ /*ע�������ǵ���Ϊֹ*/
				pop(s1,y);
				push(s2,y);
			}
			push(s1,x);           /*x��ջ��ʵ����Ԫ�ص���ӣ�����1*/
			return 1;
		}
	}else{
		push(s1,x);                /*��s1û��������xֱ����ջ������1*/
		return 1;
	}
}
/*s2ջ��Ԫ����ջ��ʵ�ֳ��Ӳ�����x���ճ���Ԫ�أ����ɹ��򷵻�1�����򷵻�0*/
int deQueue(Stack s2,Stack s1,int x) 
{
	int y;
	if(!isEmpty(s2)){        //ջs2 ���գ���ֱ�ӳ��ӣ�����1 
		pop(s2,x);
		return 1;
	}
	else{                   //����s2��ջ 
		if(isEmpty(s1))
			return 0;        //������ջҲΪ�գ����ж϶ӿգ�����0 
		else{                 //�Ƚ�s1 ���� s2���������Ӳ��� 
			while(!isEmpty(s1)){
				pop(s1,y);
				push(s2,y);
			}
			pop(s2,x);           //s2��ջ��ʵ�ֶ��г��� 
			return 1;			//����1 
		}
	}
}
/*�ж�s1 �� s2ģ������Ƿ�Ϊ��*/
int isQueueEmpty(Stack s1,Stack s2)
{
	if(isEmpty(s1)&&isEmpty(s2))
		return 1;//���п� 
	else 
		return 0;//���в��� 
}
















