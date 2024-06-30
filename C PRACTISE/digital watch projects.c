#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    char am[]={"AM"};
    char pm[]={"PM"};
    char apm[50];
    int second, minute, hour, date, month, year, week;

printf("ENTER THE HOUR: ");
scanf("%d",&hour);
printf("ENTER THE MINUTE: ");
scanf("%d",&minute);
printf("ENTER THE SECOND: ");
scanf("%d",&second);

printf("\n");

printf("ENTER THE DATE: ");
scanf("%d",&date);
printf("ENTER THE MONTH: ");
scanf("%d",&month);
printf("ENTER THE YEAR: ");
scanf("%d",&year);

printf("\n");



    while(1)
    {
        system("CLS");

                        if(hour>=12)
                            {
                                strcpy(apm, pm);
                            }
                        else
                        {
                            strcpy(apm, am);
                        }


        printf("%.2d : %.2d : %.2d %s\n\n %.2d/%.2d/%.4d",hour,minute, second, apm, date, month, year);

        second++;

        fflush(stdout);

        if(second==60)
        {
            minute+=1;
            second=0;
        }
        if(minute==60)
        {
            hour+=1;
            minute=0;
        }
        if(hour==24)
        {
            second=0;
            minute=0;
            hour=0;
            date+=1;
            week+=1;
        }

        if(date>30)
        {

            month+=1;
            date=1;
        }
         if(month>12)
        {

            year+=1;
            month=1;
        }




        sleep(1);
    }










    return 0;
}
