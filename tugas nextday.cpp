#include <iostream>
using namespace std;
struct nextday {
	int day, month, years;
};
int main()
{
	nextday next_day;
	cout << "Ketik Tanggal Bulan dan Tahun Yang Anda Inginkan :\n";
	cin >> next_day.day >> next_day.month >> next_day.years;
	if (next_day.day > 0 && next_day.day < 28)
		next_day.day += 1;
	if (next_day.day == 28)
	{
		if (next_day.month == 2)
		{
			if ((next_day.years % 400 == 0) || (next_day.years % 100 != 0 || next_day.years % 4 == 0))
			{
				next_day.day = 29;
			}
			else
			{
				next_day.day = 1;
				next_day.month = 3;
			}
		}
		else 
			next_day.day += 1;
		
	}
	if (next_day.day == 29)	
	{
		if (next_day.month == 2)
		{
			next_day.day = 1;
			next_day.month = 3;
		}
		else
			next_day.day += 1;
	}
	if (next_day.day == 30)
	{
		if (next_day.month == 1 || next_day.month == 3 || next_day.month == 5 || next_day.month == 7 || next_day.month == 8 || next_day.month == 10 || next_day.month == 12)
			next_day.day += 1;
		else
		{
			next_day.day = 1;
			next_day.month += 1;
		}
	}
	if (next_day.day == 31)	
	{
		next_day.day = 1;
		if (next_day.month == 12)	
		{
			next_day.years += 1;
			next_day.month = 1;
		}
		else
			next_day.month += 1;
	}
	cout << "Besok adalah Hari :\n";
	if (next_day.day < 10)	
	{
		cout << "0" << next_day.day << " ";
	}
	else
		cout << next_day.day << " ";
	if (next_day.month < 10)	
	{
		cout << "0" << next_day.month << " ";
	}
	else
		cout << next_day.month << " ";
	cout << next_day.years;
}