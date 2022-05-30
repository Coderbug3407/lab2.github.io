#include <iostream>
#include <string>
using namespace std;
//cin stream extraction operator
    istream &operator >> (istream &strm, Date &obj)
    {
        //prompt user for the day
        cout<<"Enter the day: ";
        strm >> obj.day;
	    while (obj.day < 1 || obj.day > 31)
	    {
	    cout << "Enter valid day: ";
	    strm >> obj.day;
	    }
        cout<<"Enter the month: ";
        strm >> obj.month;
    	while (obj.month < 1 || obj.month > 12)
	    {
	    cout << "Enter the valid month: " ;
	    strm >> obj.month;
	    }    
        cout<<"Enter the year: ";
        strm >> obj.year;
        return strm;
    }
    ostream & operator << (ostream &out, const Date &obj)
    {
        out <<obj.month_name[obj.month] <<" "<<obj.day <<", "<<obj.year<<endl;
    }
    Date Date::operator++()
    {
        check_daySum();
        ++day;
        return *this;
    }
    Date Date::operator++(int)
    {
        Date temp(month,day,year);
        check_daySum();
        day++;
        return temp;
    }
    Date Date::operator--()
    {
        check_dayMinus();
        --day;
        return *this;
    }
    Date Date::operator--(int)
    {
        Date temp(month,day,year);
        check_dayMinus();
        day--;
        return temp;
    }
    Date Date::operator-(const Date &obj)
    {
        Date temp;
        temp.day = day - obj.day;
        return temp;
    }
    void  Date::print()
    {
        cout<<"The day is "<<day<<endl;
    }
    void Date::check_daySum()
    {
        if(day==month_num[12]&&month==12)
        {
            setDay(0);
            setMonth(1);
        }
        if(day==month_num[month])
        {
            setDay(0);
            month++;
        }
    }
    void Date::check_dayMinus()
    {
        if(day==1&&month==1)
        {
            setDay(32);
            setMonth(12);
        }
        if(day==1)
        {
            day=month_num[month-1]+1;
            month--;
        }
    }
    