/*s1为输入栈，逐个压入，模拟入队。当需要出队时，逐个从s1出栈再逐个压入s2中，
再全部出栈，模拟了出队，实现了先进先出特性，当两个栈都为空时才算是队空*/
typedef struct{
	int data[MaxSize];
	int top;         //栈顶指针 
}SqStack,*Stack; 
int enQueue(Stack s1,Stack s2,int x) 
/*s1是容量为maxSize的栈，算法将x入栈，若成功则返回1，否则返回0*/
{
	int y;
	if(s1->top==maxSize-1){      /*若s1满，则看s2是否为空*/
		if(!isEmpty(s2))
			return 0;            /*s1满s2非空，这时s1不能再入栈，返回0*/
		else if(isEmpty(s2)){     /*若s2为空，则将s1退栈，元素压栈到s2*/
			while(!isEmpty(s1)){ /*注意这里是到空为止*/
				pop(s1,y);
				push(s2,y);
			}
			push(s1,x);           /*x入栈，实现了元素的入队，返回1*/
			return 1;
		}
	}else{
		push(s1,x);                /*若s1没有满，则x直接入栈，返回1*/
		return 1;
	}
}
/*s2栈顶元素退栈，实现出队操作，x接收出队元素，若成功则返回1，否则返回0*/
int deQueue(Stack s2,Stack s1,int x) 
{
	int y;
	if(!isEmpty(s2)){        //栈s2 不空，则直接出队，返回1 
		pop(s2,x);
		return 1;
	}
	else{                   //处理s2出栈 
		if(isEmpty(s1))
			return 0;        //若输入栈也为空，则判断队空，返回0 
		else{                 //先将s1 倒入 s2，再做出队操作 
			while(!isEmpty(s1)){
				pop(s1,y);
				push(s2,y);
			}
			pop(s2,x);           //s2退栈，实现队列出队 
			return 1;			//返回1 
		}
	}
}
/*判断s1 和 s2模拟队列是否为空*/
int isQueueEmpty(Stack s1,Stack s2)
{
	if(isEmpty(s1)&&isEmpty(s2))
		return 1;//队列空 
	else 
		return 0;//队列不空 
}
















