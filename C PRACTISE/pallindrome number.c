#include<stdio.h>
#include<math.h>

int main(){
int check, num, n,i, sum=0, rem, lower, upper;

printf("if number & its reverse number is same, it called pallindrome number.\n\n");
printf("1. CHECK PALLINDROME\n2. FIND PALLINDROME\nCHOOSE ONE: ");
scanf("%d", &check);

if(check==1)
{
printf("enter number : ");
scanf("%d", &num);

n = num;

while(n != 0)
{
i = n % 10;
sum = sum*10 + i;
n = n / 10;
}
if(num==sum)
printf("pallindrome number");
else
    printf("not pallindrome number");
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

                        while(n!=0)
                        {
                        i = n % 10;
                        sum = sum*10 + i;
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
