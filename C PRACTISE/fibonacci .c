#include<stdio.h>
#include<math.h>
int main()
{
    int first=0, second=1, fibo, count=0, n;

   //1-2+3-4+5-6+........+n

    printf("ENTER THE VALUE OF n : ");
    scanf("%d", &n);

    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo= first + second;
            first= second;
            second=fibo;
        }
    printf("%d ", fibo);
    ++count;

    }

    return 0;
}
