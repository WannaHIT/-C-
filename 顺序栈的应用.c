/*用栈来判断括号是否配对*/
int match(char exp[],int n) 
{
	char stack[maxsize];int top=-1; //完成定义和初始化，简化写法考试可以节省时间
	
	int i;
	for(i=0;i<n;i++) {
		if(exp[i]=='(')          //如果遇到 '(' 则入栈等待以后处理 
			stack[++top] = '(';   //一句完成入栈操作 
		if(exp[i]==')'){
			if(top==-1)       //如果当前的符号是 ')' 并且栈空，则不匹配，返回0 
				return 0;
			else 
				top--;      //如果栈不空，则出栈，相当于划掉了两个括号 
		}		
	}
	if(top==-1)         //栈空（所有括号都被处理掉），则说明括号是匹配的 
		return 1;
	else                 //否则不匹配 
		return 0;
}

