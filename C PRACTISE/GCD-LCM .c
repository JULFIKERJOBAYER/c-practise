#include<stdio.h>
int main(){
int i,n1, n2, num1, num2, gcd, lcm;
printf("enter number 1 : ");
scanf("%d", &num1);
printf("enter number 2 : ");
scanf("%d", &num2);

n1=num1;
n2=num2;


while(n2!=0)
{

i=n1%n2;
n1=n2;
n2=i;

}

gcd = n1;

lcm = num1*num2/gcd;

printf("GCD: %d\n", gcd);
printf("LCM: %d\n", lcm);

return 0;
}
