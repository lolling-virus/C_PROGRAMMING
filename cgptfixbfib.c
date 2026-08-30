#include <stdio.h>

int main()
{
    printf("Please enter the number of terms to be printed in the non-fibonacci series:\n");

    int n, i, j, sum = 0, a = 0, b = 1, flag;

    scanf("%d", &n);

    for(i = 0; i <= n; i++)
    {
        flag = 0;       // RESET FLAG for every number

        sum = 0;
        a = 0;
        b = 1;

        if(i == 0)
        {
            flag = 1;
        }
        else
        {
            for(j = 0; j <= i; j++)
            {
                sum = a + b;
                a = b;
                b = sum;

                if(sum == i)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag != 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}