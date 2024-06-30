#include<stdio.h>
#include<math.h>

int main(){
int check, num,x, n,i,fact, sum=0, rem, lower, upper;

printf("if number & its digits fact sum number is same, it called strong number.\n\n");
printf("1. CHECK STRONG\n2. FIND STRONG\nCHOOSE ONE: ");
scanf("%d", &check);

if(check==1)
{
printf("enter number : ");
scanf("%d", &num);

n = num;

while(n != 0)
{
i = n % 10;
fact=1;
for(x=1; x<=i; x++)
{
  fact= fact*x;
}
sum = sum + fact;
n = n / 10;
}
if(num==sum)
printf("strong number");
else
    printf("not strong number");
}
else if(check==2)
{
    printf("PLEASE ENTER THE RANGE:\n");
    printf("LOWER VALUE OF RANGE: ");
    scanf("%d", &lower);
    printf("UPPER VALUE OF RANGE: ");
    scanf("%d", &upper);

        for(rem=lower; rem<=upper; rem++)
        {
n = rem ;

while(n != 0)
{
i = n % 10;
fact=1;
for(x=1; x<=i; x++)
{
  fact= fact*x;
}
sum = sum + fact;
n = n / 10;
}

            if(rem==sum)
                {
                    printf("%d\n", rem);
                }
            sum=0;
        }
        }


else{printf("INVALID CHOICE.......\n");}

return 0;
}
