#include "item.h"
#include "dairy.h"

dairy::dairy(){
	month = 0;
	day = 0;
	year = 0;
	temp = 0;
	return;
}

dairy::dairy(string nname, double nprice, string nbc, int nmonth, int nday, int nyear, double ntemp){
	SetItem(nname, nprice, nbc);
	SetCat("dairy");
	month = nmonth;
	day = nday;
	year = nyear;
	temp = ntemp;
	return;
}

void dairy::SetDairy(string nname, double nprice, string nbc, int nmonth, int nday, int nyear, double ntemp){
	SetItem(nname, nprice, nbc);
	SetCat("dairy");
	month = nmonth;
	day = nday;
	year = nyear;
	temp = ntemp;
	return;
}