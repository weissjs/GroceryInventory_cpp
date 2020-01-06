#include "fruit.h"
#include "item.h"

fruit::fruit(){
	month = 0;
	day = 0;
	year = 0;
	return;
}

fruit::fruit(string nName, double nPrice, string nbc, int nmonth, int nday, int nyear){
	SetItem(nName, nPrice, nbc);
	SetCat("fruit");
	month = nmonth;
	day = nday;
	year = nyear;
	return;
}

void fruit::SetFruit(string nName, double nPrice, string nbc, int nmonth, int nday, int nyear){
	SetItem(nName, nPrice, nbc);
	SetCat("fruit");
	month = nmonth;
	day = nday;
	year = nyear;
	return;
}

