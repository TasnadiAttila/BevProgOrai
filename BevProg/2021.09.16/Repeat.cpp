#include "std_lib_facilities.h"
int main()
{
	string previous = " ";
	string current = " ";
	while(cin >> current)
	{
		cout << current << "\n";
		if(previous == current)
		{
			cout << "Repeted word: " << current << "\n";
		}
		previous = current;
	}



	return 0;	
}