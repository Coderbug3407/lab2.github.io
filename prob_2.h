#include <iostream>
#include <string>
class DivSales
{
    private:
//array holding four quarters of sales figures    
    double Sale_Figure[4];
//totalSale holds total corporate sales for all divisions in entire year
    static double total_Sale;
    public:
//get sales for a quarter    
    void get_sale(double first_sale, double second_sale, double third_sale, double fourth_sale)
    {
    Sale_Figure[0]=first_sale;
    Sale_Figure[1]=second_sale;
    Sale_Figure[2]=third_sale;
    Sale_Figure[3]=fourth_sale;
//total of 4 arguments add to total sale  
    for(int i=0;i<4;i++)
    {
        total_Sale+=Sale_Figure[i];
    }
    }
    double get_totalSale()
    {return total_Sale;}
//take into the division quarterly sale array
    double sale_quarter(int sale)
    {
        if(sale<0||sale>3)
        {
            exit(0);
        }
        else
        {
            return Sale_Figure[sale];
        }
    }
};
//definition static variable "total_Sale"
    double DivSales::total_Sale = 0;