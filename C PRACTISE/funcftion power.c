#include<stdio.h>

void trianglearea(double base, double height)
{
    double i, result=1;

  result= 0.5 * base * height;

    printf("THE RESULT IS: %lf\n", result);
}

int main()
{
    double base, height;

    printf("ENTER THE BASE: ");
    scanf("%lf", &base);

    printf("ENTER THE height: ");
    scanf("%lf", &height);

    trianglearea(base,height);

}
