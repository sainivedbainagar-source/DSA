#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int st[100];
int top = -1;

void push(int x)
{
    st[++top] = x;
}

int pop()
{
    return st[top--];
}

int main()
{
    char pre[100], temp, *e;
    int i, len, n1, n2;

    printf("Enter Prefix Expression: ");
    scanf("%[^\n]", pre);

    len = strlen(pre);


    for(i = 0; i < len/2; i++)
    {
        temp = pre[i];
        pre[i] = pre[len-i-1];
        pre[len-i-1] = temp;
    }

    e = pre;

    while(*e != '\0')
    {
        if(*e == ' ')
        {
        }
        else if(isdigit(*e))
        {
            push(*e - '0');
        }
        else
        {
            n1 = pop();
            n2 = pop();

            switch(*e)
            {
                case '+':
                    push(n1 + n2);
                    break;

                case '-':
                    push(n1 - n2);
                    break;

                case '*':
                    push(n1 * n2);
                    break;

                case '/':
                    push(n1 / n2);
                    break;

                case '%':
                    push(n1 % n2);
                    break;

                case '^':
                    push(pow(n1, n2));
                    break;

                default:
                    printf("Invalid Operator\n");
            }
        }

        e++;
    }

    printf("Result = %d", pop());

    return 0;
}
