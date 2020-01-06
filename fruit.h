#ifndef FRUIT_H
#define FRUIT_H
#include "item.h"

class fruit : public item{
	public:
		fruit();
		fruit(string, double, string, int, int, int);
		void SetFruit(string, double, string, int, int, int);
		void Display(){
			item:Display();
			cout << " Sell by date: " << month << "-" << day << "-" << year << endl;
		}
	private:
		int month;
		int day;
		int year;
};

#endif