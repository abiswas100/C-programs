#include<stdio.h>
#include<string.h>
int priority(char ch)
{
	if(ch=='^')
	 return 4;
	else if(ch=='*' || ch=='/' || ch=='%')
	 return 3;
	else if(ch=='+' || ch=='-')
	 return 2;
	else
	 return 1;
}

void main()
{
	char infix[100],post[100], stack[50];
	int top=-1,ind=0,i;
	printf("\nEnter the expression ");
	scanf("%s",infix);
	strcat(infix,")");
	strupr(infix);
	stack[++top]='(';// initialize
	for(i=0;i<strlen(infix);i++)
	{
		if(infix[i]>='A' && infix[i]<='Z')// operand
		 post[ind++]=infix[i];
		
	    else if(infix[i]=='(')
	     stack[++top]=infix[i];
	     
	    else if(infix[i]==')')
	     {
	     	while(stack[top]!='(')
	     	 post[ind++]=stack[top--];
	     	 
	     	 top--;
		 }
		 else
		 {
		 	if(priority(infix[i])>priority(stack[top]))
		 	 stack[++top]=infix[i];
		 	 else
			  {
			  		while(priority(infix[i])<=priority(stack[top]))
			  		 post[ind++]=stack[top--];
			  		 
			  		stack[++top]=infix[i];
			  }		
	      }
	      stack[++top]='\0';
	      post[ind]='\0';
	      printf("\n%c\t%s\t%s",infix[i],stack,post);
	     top--;
	    }
	
}
