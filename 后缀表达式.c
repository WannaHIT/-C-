/*3-1后缀表达式*/
#include<stdio.h>
#include<stdlib.h>
#define maxSize 100
/*栈链表定义*/
typedef struct LNode{
	int data;            //数据域 
	struct LNode *next;// 指针域 
}LNode,*Stack; 
/*运算函数，用来完成算式“a Op b”的运算*/

int op(int a,char Op,int b)
{
	if(Op=='+') return a+b;
	if(Op=='-') return a-b;
	if(Op=='*') return a*b;
	if(Op=='/'){
		if(b==0){
			printf("Error\n");
			return 0;
		}else{
			return a/b;
		}
	}
}
/*后缀式计算函数*/
int com(char exp[]) 
{
	int i,a,b,c;      //      a，b为操作数，c来保存结果 
	int stack[maxSize];int  top=-1;/*栈的初始化和定义，注意元素类型必须为int，不能是char
									，因为虽然题目守操作数都只有一位，但是运算过程可能产生多位数字
									，所以要用整形*/
	char Op;//
	for(i=0;exp[i]!='\0';++i) {
		if(exp[i]>'0'&&exp[i]<=9)/*如果遇到操作数，则入栈等待处理，体现了栈的记忆功能*/
			stack[++top] = exp[i]-'0';
		else					/*如果遇到运算符，则说明前面待处理的数字的处理条件已具备，开始运算*/
			Op = exp[i] ;   //取运算符 
			b = stack[top--]; //取第二个操作数（因为第二个数后入栈） 
			a = stack[top--] ;//取第一个操组数 
			c = op(a,Op,b); //运算结果保存到C 
			stack[++top] = c; //运算结果入栈 
	}
	return stack[top];
}


/*3-2不带头结点的单链表的存储链栈*/
/**/
void initStack(Stack lst) 
{
	lst==NULL;
}
int isEmpty(LNode *lst)
{
	if(lst==NULL)
		return 1;
	else 
		return 0;
}
void push1(Stack lst,int x)//入栈 
{
	Stack p;
	p = (Stack)malloc(sizeof(LNode));
	p->next=NULL;
	p->data =x;
	/*插入操作*/
	p->next = lst;
	lst = p;
}
int pop1(Stack lst,int x)//出栈
{
	Stack p;
	if(lst==NULL)   //栈空 
		return 0;
	p = lst;//p指向第一个数据结点 
	/*删除结点操作*/
	x = p->data;
	lst = p->next;
	free(p);
	return 1;
 } 
int main(void)
{
	return 0;
}
















