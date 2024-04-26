#include <stdio.h>
#include <string.h>

char st[20],a[30],b[30];
int t=-1,i=0,j=0;

void push(char ch)
{
    st[++t]=ch;
}
char pop()
{
    return(st[t--]);
}
void compare(char ch)
{
    if(ch=='(')
    {
        push(ch);
    }
    if(ch==')')
    {
        while(pop()!='(')
        {
            b[j++]=pop();
        }
    }
    if(ch=='+'||ch=='-')
    {
        if(st[t]=='*'||st[t]=='/'||st[t]=='+'||st[t]=='-')
        {
            b[j++]=pop();
        }
        else
        {
            push(ch);
        }
    }
    if(ch=='*'||ch=='/')
    {
        b[j++]=pop();
    }
    if(ch!='+' && ch!='-' && ch!='*' && ch!='/')
    {
        b[j++]=ch;
    }
}
void convert()
{
    while(a[i]!='\0')
    {
        compare(a[i]);
        i++;
    }
    while(t>=0)
    {
        b[j++]=pop();
    }
    b[j++]='\0';
}
int main()
{
    printf("Enter any infix equation >>");
    gets(a);
    convert();
    printf("THE postfix notation is >>%s",b);
    
    return 0;
}