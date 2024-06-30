#include<stdio.h>
#include<math.h>

int main(){
int num, n,i, sum=0;

printf("enter number : ");
scanf("%d", &num);

n = num;

while(n != 0)
{
i = n % 10;
sum = sum + i;
n = n / 10;
}

printf("sum= %d\n", sum);

return 0;
}
