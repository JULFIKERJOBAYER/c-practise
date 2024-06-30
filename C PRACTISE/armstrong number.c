#include<stdio.h>
#include<math.h>

int main(){
int inum,fnum,check, n,i,r, sum=0;
printf("1. CHECK ARMSTRONG\n2. FIND ARMSTRONG\nCHOOSE ONE: ");
scanf("%d", &check);

if(check==1)
{ printf("ENTER A NUMBER: ");
    scanf("%d", &i);

        n = i;

while(n != 0)
{
r = n % 10;
sum = sum + pow(r,3);
n = n / 10;
}
            if(sum==i)
            printf("ARSTRONG NUMBER");
            else
                printf("NOT ARMSTRONG NUMBER");
}

if(check==2)
{
printf("enter initial number : ");
scanf("%d", &inum);
printf("enter final number : ");
scanf("%d", &fnum);
for(i=inum ; i<=fnum; i++)

{
    n = i;

while(n != 0)
{
r = n % 10;
sum = sum + pow(r,3);
n = n / 10;
}
if(sum==i){
printf("%d\n", i );
}

sum=0;
}
}
else{printf("INVALID CHOICE");}
return 0;
}

