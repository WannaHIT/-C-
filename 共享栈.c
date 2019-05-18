/*共享栈*/
#define MAXSIZE  100
typedef struct{
	int elem[MAXSIZE];
	int top[2];           //top[0]为s0 栈顶， top[1]为s1 栈顶，
}SqStack,*Stack;

/*入栈操作*/
int push(Stack st,int stNo,int x)   /*stNo是栈顶编号，指示x进入哪个栈*/
{
	if(st->top[0]+1<st->top[1]){     /*栈不满可以入栈*/
		if(stNo==0){                  /*元素入st0*/
			++(st->top[0]);
			st->elem[st->top[0]]=x;
			return 1;
		}
		else if(stNo=1){             /*元素入st1*/
			--(st->top[1]);
			st->elem[st->top[1]] =x;
			return 1;
		}
		else return -1;            /*栈编号有误不能入栈，返回-1*/
	}
	else return 0;                 /*栈满不能入栈返回0*/
}
/*出栈*/
int pop(Stack st,int stNo,int x) 
{
	if(stNo==0)                     /*st0出栈*/
	{ 
		if(st->top[0]!=-1){             /*st0不空，则可以出栈*/
			x = st->elem[st->top[0]];
			--(st->top[0]);
			return 1;                 /*st0空，出栈失败，返回0*/
		}
		else return 0;
	}else if(stNo==1){                /*st1出栈*/
		if(st->top[1]!= MAXSIZE){        /*st1不空，可以出栈*/
			x= st->elem[st->top[1]];
			++(st->top[1]);
			return 1;
		}
		else return 0;                /*st1空，出栈失败，返回0*/
	}
	else return -1;                  /*栈编号有误，返回-1*/
}











