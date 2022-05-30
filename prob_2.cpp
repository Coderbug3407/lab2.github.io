#include <iostream>
#include "prob_2.h"
#include <iomanip>
using namespace std;
int main()
{
	DivSales sale[6];
	DivSales total_sale;
	double first, second, third, four;

	for (int x = 0; x < 6; x++)
	{
		cout << "Division " << x + 1 << endl;
		cout << "Enter first quarter's sales: ";
		cin >> first;
		cout << "Enter second quarter's sales: ";
		cin >> second;
		cout << "Enter third quarter's sales: ";
		cin >> third;
		cout << "Enter fourth quarter's sales: ";
		cin >> four;

		sale[x].get_sale(first, second, third, four);
		cout << endl;
	}
    cout<<setw(47)<<"Quarter 1"<<setw(16)<<"Quarter 2"<<setw(16)<<"Quarter 3"<<setw(16)<<"Quarter 4"<<endl;
	for (int x = 0; x < 6; x++)
	{
		cout <<setw(30)<< "Division " << x+1 ;

		for (int y = 0; y < 4; y++)
		{
			cout <<setw(15)<<"$"<<sale[x].sale_quarter(y)<<setw(30);
		}

		cout << endl;
	}

	cout << "Total sales for entire year: $" << total_sale.get_totalSale() << endl;

	return 0;
}