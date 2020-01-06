#ifndef DAIRY_H
#define DAIRY_H
#include "item.h"

class dairy : public item{
	public:
		dairy();
		dairy(string, double, string, int, int, int, double);
		void SetDairy(string, double, string, int, int, int, double);
		void Display(){
			item:Display();
			cout << " exp date: " << month << "-" << day << "-" << year << endl;
			cout << " storage temperature: ";
			cout << setprecision(1) << temp << " degrees F" << endl;
		}
	private:
		int month;
		int day;
		int year;
		double temp;
};

#endif