/*3-1��׺���ʽ*/
#include<stdio.h>
#include<stdlib.h>
#define maxSize 100
/*ջ������*/
typedef struct LNode{
	int data;            //������ 
	struct LNode *next;// ָ���� 
}LNode,*Stack; 
/*���㺯�������������ʽ��a Op b��������*/

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
/*��׺ʽ���㺯��*/
int com(char exp[]) 
{
	int i,a,b,c;      //      a��bΪ��������c�������� 
	int stack[maxSize];int  top=-1;/*ջ�ĳ�ʼ���Ͷ��壬ע��Ԫ�����ͱ���Ϊint��������char
									����Ϊ��Ȼ��Ŀ�ز�������ֻ��һλ������������̿��ܲ�����λ����
									������Ҫ������*/
	char Op;//
	for(i=0;exp[i]!='\0';++i) {
		if(exp[i]>'0'&&exp[i]<=9)/*�������������������ջ�ȴ�����������ջ�ļ��书��*/
			stack[++top] = exp[i]-'0';
		else					/*����������������˵��ǰ�����������ֵĴ��������Ѿ߱�����ʼ����*/
			Op = exp[i] ;   //ȡ����� 
			b = stack[top--]; //ȡ�ڶ�������������Ϊ�ڶ���������ջ�� 
			a = stack[top--] ;//ȡ��һ�������� 
			c = op(a,Op,b); //���������浽C 
			stack[++top] = c; //��������ջ 
	}
	return stack[top];
}


/*3-2����ͷ���ĵ�����Ĵ洢��ջ*/
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
void push1(Stack lst,int x)//��ջ 
{
	Stack p;
	p = (Stack)malloc(sizeof(LNode));
	p->next=NULL;
	p->data =x;
	/*�������*/
	p->next = lst;
	lst = p;
}
int pop1(Stack lst,int x)//��ջ
{
	Stack p;
	if(lst==NULL)   //ջ�� 
		return 0;
	p = lst;//pָ���һ�����ݽ�� 
	/*ɾ��������*/
	x = p->data;
	lst = p->next;
	free(p);
	return 1;
 } 
int main(void)
{
	return 0;
}
















