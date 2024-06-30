#include<stdio.h>

void swap(int *p1, int *p2)
{ int temp;

    temp=*p1;
    *p1=*p2;
    *p2=temp;


}
int main()
{
    int x=10, y=5;

    printf("BEFORE SWAPPING: X= %d, Y=%d\n", x, y);

    swap(&x, &y);

    printf("AFTER SWAPPING: X= %d, Y=%d\n", x, y);

    return 0;

}
