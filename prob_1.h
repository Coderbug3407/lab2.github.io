#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
    int month;
    int day;
    int year;
public:
    //max of number of day in each month
    int month_num[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    //month in integer
    int month_in_number[13] ={0,1,2,3,4,5,6,7,8,9,10,11,12};
    string month_name[13] = { "","January", "February", "March","April", "May", "June",
							"July", "August", "September","October", "November", "December" };
    //constructor
    Date(int m=0,int d=0, int y=0)
    {
        month=m;
        day=d;
        year=y;
    }
    void setDay(int d)
    {day=d;}
    void setMonth(int m)
    {month=m;}
    //operator
    friend istream & operator>>(istream &strm, Date &obj);
    friend ostream & operator<<(ostream &out, const Date &obj);
    Date operator - (const Date &); //overloaded -
    Date operator ++ (); // prefix ++
    Date operator ++ (int); //postfix++
    Date operator -- ();
    Date operator -- (int);
    void print();
    void check_daySum();
    void check_dayMinus();
};
