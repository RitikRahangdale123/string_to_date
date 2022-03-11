include<stdio.h>

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

    printf("%d",date);
    printf("%d",month);
    printf("%d",year);
   
   return 0;

 
}