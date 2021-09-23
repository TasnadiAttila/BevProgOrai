#include "std_lib_facilities.h"
int main()
{
    const double cm_per_inch = 2.54;
    double length = -1;
    char unit = 0;

    cout << "Please enter a length followed by a unit (c or i)" << endl;
    cin >> length >> unit;
    /*
    if(unit == 'i')
    {
        cout << length << " in == " << length*cm_per_inch << " cm" << endl;
    }
    else if(unit == 'c')
    {
        cout << length << " cm == " << length/cm_per_inch << " inch" << endl;
    }
    else
    {
        cout << "Error, invalid char!";
    }    
    */
    switch (unit)
    {
        case 'i' :
        {
            cout << length << " in == " << length*cm_per_inch << " cm" << endl;
        }
            break;
        case 'c' :
        {
            cout << length << " cm == " << length/cm_per_inch << " inch" << endl;
        }
            break;
        default:
        {
            cout << "Error, invalid char!" << endl;           
        }
    }

    return 0;
}