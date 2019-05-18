#include<stdio.h> 
int judge(char ch[]) 
/*判断字符数组的ch[]的序列是否合法序列，如果是返回1，否则返回0*/
{
	int i=0;
	int I=0,O=0;   //I和O分别代表字符“I” 和“O”的个数 
	while(ch[i]!='\0'){
		if(ch[i]=='I')
			++I;
		if(ch[i]=='O')
			++O;
		if(O>I)
			return 0;//扫描过程中O的个数大于I的个数，则一定不合法 
	}
	if(I!=O)
		return 0;    //两者总数不等，不合法，返回0 
	else 
		return 1;  //合法返回1 
}
int main(void)
