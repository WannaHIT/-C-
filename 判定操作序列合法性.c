#include<stdio.h> 
int judge(char ch[]) 
/*�ж��ַ������ch[]�������Ƿ�Ϸ����У�����Ƿ���1�����򷵻�0*/
{
	int i=0;
	int I=0,O=0;   //I��O�ֱ�����ַ���I�� �͡�O���ĸ��� 
	while(ch[i]!='\0'){
		if(ch[i]=='I')
			++I;
		if(ch[i]=='O')
			++O;
		if(O>I)
			return 0;//ɨ�������O�ĸ�������I�ĸ�������һ�����Ϸ� 
	}
	if(I!=O)
		return 0;    //�����������ȣ����Ϸ�������0 
	else 
		return 1;  //�Ϸ�����1 
}
int main(void)
