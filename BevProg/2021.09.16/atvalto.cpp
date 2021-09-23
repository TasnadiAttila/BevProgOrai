#include "std_lib_facilities.h"
int main()
{
	//centi -> inch
	const double Oneinch = 2.54;
	double length = 1;
	while(length != 0){
		cout << "Enter distance in inches: \n";
		cin >> length;
		cout << "Length in cm: " << length*Oneinch << "\n";
	}

	return 0;	
}