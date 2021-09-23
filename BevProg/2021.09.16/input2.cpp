#include "std_lib_facilities.h"
int main()
{
	cout << "Please enter your first name and your age\n";
	string first_name;
	int age;
	cin >> first_name;
	cin >> age;
	cout << "Welcome, " << first_name << " (" << age << ")" << "!\n";


	return 0;	
}