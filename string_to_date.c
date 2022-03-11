include<stdio.h>

typedef struct my_date_t
{
    int date;       /*<<< date */
    int month;      /*<<< month */
    int year;       /*<<< year   */
}my_date_t;




   class my_date_t
    {
        satic void Main(string[] args)
        {
            string txt1="2021-01-30";

            DateTime d1= DateTime.ParseExact(txt1,"year-month-date",null);

            string txt2="2021/01/30";

            DateTime d2= DateTime.ParseExact(txt2,"year/month/date",null);

            string txt3="2021.01.30";

            DateTime d3= DateTime.ParseExact(txt1,"year.month.date",null);
        }
    }




int main()
{
    int date,month,year;

    printf("%d",date);
    printf("%d",month);
    printf("%d",year);
   
   return 0;

 
}