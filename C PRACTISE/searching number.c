#include<stdio.h>
int main()
{
int num[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 5, 15, 25, 35, 45, 55, 65, 75, 85, 95};
int n, i, pos=0;
printf("ENTER THE VALUE OF N: ");
scanf("%d", &n);


for( i=0; i<n; i++)
{
    if( n==num[i])
    {
        pos= i+1;
        break;
    }

}


if(pos==0)
{
    printf("NOT FOUND.");
}
else
    printf("THE POSITION OF %d IS %d", n, pos);

}
