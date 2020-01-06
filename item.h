#ifndef item_h
#define item_h

#include <iostream>
#include <cstring>
#include <sstream>
#include <iomanip>
using namespace std;

class item{
	public: 
		item();
		item(string, double, string);
		void SetItem(string, double, string);
		void SetCat(string);
		virtual void Display(){
			cout << name << ": " << cat << endl;
			cout << " price - $";
			cout << setprecision(2) << price << endl;
			cout << " gsl   - ";
			cout << fixed << bc_num << endl;
		}
	private:
		string name;
		double price;
		string bc_num;
		string cat;
};

#endif