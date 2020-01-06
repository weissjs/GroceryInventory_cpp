#include "item.h"

item::item(){
	name = "0";
	price = 0;
	bc_num = "0";
	cat = "general";
	return;
}

item::item(string nameSet, double priceSet, string bcSet){
	name = nameSet;
	price = priceSet;
	bc_num = bcSet;
	cat = "general";
	return;
}

void item::SetItem(string nameSet, double priceSet, string bcSet){
	name = nameSet;
	price = priceSet;
	bc_num = bcSet;
	return;
}

void item::SetCat(string ncat){
	cat = ncat;
	return;
}

