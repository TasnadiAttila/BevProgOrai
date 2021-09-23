#include "std_lib_facilities.h"
int main()
{
	cout << "Please enter your first name and your age\n";
	string first_name;
	string last_name;
	int age;
	cin >> first_name >> last_name >> age;
	string name = first_name + " " + last_name;
	//age = age + 1;
	//age += 1;
	age++;
	cout << "Welcome, " << name << " (" << age << ")" << "!\n";


	return 0;	
}