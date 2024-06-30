#include<stdio.h>

int main()
{
   int n, num[100], max, min,i;
 printf("ENTER YOUR NUMBER QUANTITY: ");
 scanf("%d", &n);

 for(i=0; i<n; i++)
 {
     scanf("%d", &num[i]);
 }
 max= num[0];
 min= num[0];
  for(i=0; i<n; i++)
 {
     if(max<num[i])
        max=num[i];
     if(min>num[i])
        min=num[i];
 }
   printf("MAX NUMBER IS %d\n", max);
   printf("MIN NUMBER IS %d", min);


    return 0;
}
