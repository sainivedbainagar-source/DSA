#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

#define MAX 100

int st[MAX];
int top = -1;

void push(int x)
{
    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
        exit(0);
    }
    st[++top] = x;
}

int pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        exit(0);
    }

    return st[top--];
}

int main()
{
    char post[MAX], *e;
    int n1, n2;

    printf("Enter Postfix Expression: ");
    scanf("%[^\n]", post);

    e = post;

    while(*e != '\0')
    {
        if(*e == ' ')
        {
        }
        else if(isdigit(*e))
        {
            int num = 0;

            while(isdigit(*e))
            {
                num = num * 10 + (*e - '0');
                e++;
            }

            push(num);

            e--;
        }
        else
        {
            n1 = pop();
            n2 = pop();

            switch(*e)
            {
                case '+':
                    push(n2 + n1);
                    break;

                case '-':
                    push(n2 - n1);
                    break;

                case '*':
                    push(n2 * n1);
                    break;

                case '/':
                    push(n2 / n1);
                    break;

                case '%':
                    push(n2 % n1);
                    break;

                case '^':
                    push(pow(n2, n1));
                    break;

                default:
                    printf("Invalid Operator\n");
                    exit(0);
            }
        }

        e++;
    }

    printf("Result = %d\n", pop());

    return 0;
}
