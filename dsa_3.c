#include <stdio.h>
#include <ctype.h>
#define MAX 100             
int top =-1,stack[MAX];  
void push(int x)
{
stack[++top]=x;
}
int pop()
{
return stack[top--];
}
int main()
{
char postfix[100];
int i=0;
char ch;
int a,b;
printf("Enter postfix Expression: ");
scanf("%s",postfix);
while((ch=postfix[i])!='\0')
{
if(isdigit(ch))
{
push(ch- '0');
}
else
{
a=pop();
b=pop();
switch(ch)
{
case '+':
push(b+a);
break;
case '-':
push(b-a);
break;
case '*':
push(b*a);
break;
case '/':
push(b/a);
break;
}
}
i++;
}
printf("Result=%d",pop());
return 0;
}
