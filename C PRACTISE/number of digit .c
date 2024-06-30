#include<stdio.h>
#include<math.h>

int main(){
int num, n, count=0;

printf("enter a number : ");
scanf("%d", &num);
while(num!=0)
{
    num=num/10;
    count++;
}
printf("digit number: %d\n", count);

return 0;
}

