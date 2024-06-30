
#include<stdio.h>
int main()
{
char str[100];
int i, cap ,sma ,digit ;

i = cap = sma = digit = 0;

printf("ENTER A STRING: ");
gets(str);

while(str[i] != '\0')
{
      if(str[i]>=65 && str[i]<=90 )
          {
              cap++;
          }
      else if(str[i]>=97 && str[i]<=122)
              {
                sma++;
              }
      else if( str[i]>=48 && str[i]<=57)
             {
              digit++;
             }
    i++;
}
printf("Number of Capital letter = %d\n", cap);
printf("Number of Small letter = %d\n", sma);
printf("Number of Digit = %d\n", digit);



return 0;
}

