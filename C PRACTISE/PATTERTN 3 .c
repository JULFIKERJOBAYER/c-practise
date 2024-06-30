#include<stdio.h>
int main()
{
int n, row, col;

printf("ENTER THE NUMBER: ");
scanf("%d", &n);

/*     1
     1 2
   1 2 3
*/


for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("%d", col);
            }
            printf("\n");


}

/*     A
      BB
     CCC
    DDDD
*/


for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("%c", row+64);
            }
            printf("\n");
}

/*    +
     ++
    +++
   ++++
*/


for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("+");
            }
            printf("\n");
}

/*
   1 2 3
     1 2
       1
*/


for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("%d", col);
            }
            printf("\n");


}

/*
   1 0 1
     0 1
       1
*/


for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("%d", row%2);
            }
            printf("\n");


}
/*
   A B C D
     A B C
       A B
         A
*/


for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("%c", col+64);
            }
            printf("\n");


}

/*
  &&&&
   &&&
    &&
     &
*/


for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
            {
                printf(" ");
            }
            for(col=1; col<=row; col++)
            {
                printf("&");
            }
            printf("\n");


}


return 0;
}
