#include<stdio.h>
#include<math.h>
int main()
{                                                    //2 1 3 4 7 11........

    int first=2, second=1, lucas, i, n;


    printf("ENTER THE VALUE OF n : ");
    scanf("%d", &n);
    printf("%d %d ", first, second);

    for( i=3; i<=n; i++)
        {
            lucas= first + second;
            first= second;
            second=lucas;
            printf("%d ", lucas);

        }





    return 0;
}
