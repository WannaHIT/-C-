/*����ջ*/
#define MAXSIZE  100
typedef struct{
	int elem[MAXSIZE];
	int top[2];           //top[0]Ϊs0 ջ���� top[1]Ϊs1 ջ����
}SqStack,*Stack;

/*��ջ����*/
int push(Stack st,int stNo,int x)   /*stNo��ջ����ţ�ָʾx�����ĸ�ջ*/
{
	if(st->top[0]+1<st->top[1]){     /*ջ����������ջ*/
		if(stNo==0){                  /*Ԫ����st0*/
			++(st->top[0]);
			st->elem[st->top[0]]=x;
			return 1;
		}
		else if(stNo=1){             /*Ԫ����st1*/
			--(st->top[1]);
			st->elem[st->top[1]] =x;
			return 1;
		}
		else return -1;            /*ջ�����������ջ������-1*/
	}
	else return 0;                 /*ջ��������ջ����0*/
}
/*��ջ*/
int pop(Stack st,int stNo,int x) 
{
	if(stNo==0)                     /*st0��ջ*/
	{ 
		if(st->top[0]!=-1){             /*st0���գ�����Գ�ջ*/
			x = st->elem[st->top[0]];
			--(st->top[0]);
			return 1;                 /*st0�գ���ջʧ�ܣ�����0*/
		}
		else return 0;
	}else if(stNo==1){                /*st1��ջ*/
		if(st->top[1]!= MAXSIZE){        /*st1���գ����Գ�ջ*/
			x= st->elem[st->top[1]];
			++(st->top[1]);
			return 1;
		}
		else return 0;                /*st1�գ���ջʧ�ܣ�����0*/
	}
	else return -1;                  /*ջ������󣬷���-1*/
}











