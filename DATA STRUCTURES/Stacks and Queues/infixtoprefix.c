sa#include<stdio.h>
#include<ctype.h>
#include<string.h>

char st[100];
int top = -1;

void push(char x)
{
    if(top == 99)
    {
        printf("Stack Overflow\n");
        return;
    }
    st[++top] = x;
}

char pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    return st[top--];
}

int pre(char x)
{
    if(x == '^')
        return 3;
    else if(x == '*' || x == '/')
        return 2;
    else if(x == '+' || x == '-')
        return 1;
    else
        return 0;
}

int main()
{
    char in[100], po[100], prefx[100];
    int i, j = 0, len;

    printf("Enter infix expression: ");
    scanf("%s", in);

    len = strlen(in);


    for(i = 0; i < len/2; i++)
    {
        char temp = in[i];
        in[i] = in[len-i-1];
        in[len-i-1] = temp;
    }


    for(i = 0; i < len; i++)
    {
        if(in[i] == '(')
            in[i] = ')';
        else if(in[i] == ')')
            in[i] = '(';
    }


    for(i = 0; in[i] != '\0'; i++)
    {
        char ch = in[i];

        if(isalnum(ch))
        {
            po[j++] = ch;
        }
        else if(ch == '(')
        {
            push(ch);
        }
        else if(ch == ')')
        {

            while(top != -1 && st[top] != '(')
            {
                po[j++] = pop();
            }

            if(top != -1)
                pop();
        }
        else
        {
            while(top != -1 && pre(st[top]) > pre(ch))
            {
                po[j++] = pop();
            }

            push(ch);
        }
    }
while(  top != -1){
    po[j++] = pop();
}
po[j] = '\0';
len = strlen(po);
for( i = 0 ; i<len;i++){
    prefx[i] = po[len - i - 1];
}
prefx[len] = '\0';
printf("prefix expression : %s", prefx );
     return 0;
}
