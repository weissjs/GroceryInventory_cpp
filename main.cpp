/****************************************************************************
 * Project number: 5
 *
 * Programmer: Jordan Weiss	
 *
 * Submission Date: 11/10/2017
 *
 * EGRE 246 Fall 2017
 *
 * Pledge: I have neither given nor received unauthorized aid on the program.
 *
 * Description: Groceries part 2
 *
 *
 ***************************************************************************/

#include "item.h"
#include "fruit.h"
#include "dairy.h"
#include <fstream>
#include <vector>
#include <cstdlib>


int main(int argc, char* argv[]){
	cout.precision(10);
	item* iPtr = 0;
	fruit* fPtr = 0;
	dairy* dPtr = 0;
	int i = 0;
	int j;
	ifstream inFS;
	string ccat;
	string cname;
	string sprice;
	double dprice;
	string cbc;
	string smonth;
	string sday;
	string syear;
	string stemp;
	int imonth;
	int iday;
	int iyear;
	double dtemp;
	string end;
	
	if (argc != 2){
		cout << endl << "USAGE: main.exe inputFileName" << endl;
		return 1;
	}
	
	//cout << "Openeing file " << argv[1] << "." << endl;
	
	
	inFS.open(argv[1]);
	if (!inFS.is_open()){
		cout << "Could not open file " << argv[1] << "." << endl;
		return 1;
	}
	
	vector<item*> arr;
	
	while(!inFS.eof()){
		getline(inFS, ccat, ',');
		getline(inFS, cname, ',');
		getline(inFS, sprice, ',');
		getline(inFS, cbc, ',');
		dprice = atof(sprice.c_str());
		if (ccat == "item"){
			iPtr = new item;
			iPtr->SetItem(cname, dprice, cbc);
			arr.push_back(iPtr);
			i++;
			continue;
		}
		
		else if(ccat == "dairy"){
			dPtr = new dairy;
			getline(inFS, smonth, ',');
			getline(inFS, sday, ',');
			getline(inFS, syear, ',');
			getline(inFS, stemp, ',');
			imonth = atoi(smonth.c_str());
			iday = atoi(sday.c_str());
			iyear = atoi(syear.c_str());
			dtemp = atof(stemp.c_str());
			dPtr->SetDairy(cname, dprice, cbc, imonth, iday, iyear, dtemp);
			arr.push_back(dPtr);
			i++;
			continue;
		}
		
		else if (ccat == "fruit"){
			fPtr = new fruit;
			getline(inFS, smonth, ',');
			getline(inFS, sday, ',');
			getline(inFS, syear, ',');
			imonth = atoi(smonth.c_str());
			iday = atoi(sday.c_str());
			iyear = atoi(syear.c_str());
			fPtr->SetFruit(cname, dprice, cbc, imonth, iday, iyear);
			arr.push_back(fPtr);
			i++;
			continue;
		}
	}	
	
	for(j = 0; j<i; j++){
		cout << j+1 << "-";
		arr[j]->Display();
		cout << endl;
	}
	
	//cout << "Closing file " << argv[1] << "." << endl << endl;
	inFS.close();
	
	return 0;
}