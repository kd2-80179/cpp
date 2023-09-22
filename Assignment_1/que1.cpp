#include<stdio.h>
struct Date
{
   int day;
   int month;
    int year;
};
void initdate(struct Date *ptrdate)
{
    printf("in initial date function\n");
    ptrdate->day=0;
    ptrdate->month=0;
    ptrdate->year=0;

}

void printDateonConsole(struct Date *ptrDate)
{
    printf("in print Date on console function \n");
    printf("Date is %d-%d-%d\n",ptrDate->day,ptrDate->month,ptrDate->year);

}
void acceptDateFromConsole(struct Date *ptrDate)
{ 
    printf("in accept date from console function \n");
    printf("enter day month year \n");
    scanf("%d-%d-%d",&ptrDate ->day,&ptrDate->month,&ptrDate->year);

}
int main()
{
    int ch;
    struct Date dt;
    do
    {
       printf("************DATE************\n");
       printf("0.EXIT\n");
       printf("1.Initial Date\n");
       printf("2.print Date on Console\n");
       printf("3.Accept Date on Console\n");
       printf("Enter your choice\n");

     scanf("%d",&ch);
     switch (ch)
     {
 case 0:
       printf("****************EXIT************\n");
           break;
 case 1:
        initdate(&dt);
        break;
 case 2:
       printDateonConsole(&dt);
         break;
 case 3:
      acceptDateFromConsole(&dt);
         break;
 default:
       printf("enter valid choice\n") ;
        break;

     } 

    } while (ch);
     
     return 0;
    
    
}

