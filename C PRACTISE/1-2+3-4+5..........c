#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0, even=0, odd=0;

   //1-2+3-4+5-6+........+n

    printf("ENTER THE VALUE OF n : ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
{
    if(i%2==0)
    {
        even = even+i;
    }
    else{
        odd= odd+i;
    }
}
  sum= odd-even;
  printf("1-2+3-4+5-......+%d = %d\n", n, sum);
    return 0;
}
