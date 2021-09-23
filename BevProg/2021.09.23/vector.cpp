#include "std_lib_facilities.h"
int main()
{
    /*
    vector<int> v = {6,7,9,3,6,1};

    for (int i = 0;i<v.size();++i)
    {
        cout << v[i] << ", " << endl;
    }
    
    vector<string> names  = {"Imi","Pisti","Kati"};
    
    for (string name:names)
    {
        cout << name << endl;
    }
    */

    vector<double> dv;

    cout << "The vector size: " << dv.size() << endl;

    dv.push_back(2.7);
    dv.push_back(4.9);
    dv.push_back(3.12312);

    cout << "The vector size: " << dv.size() << endl;

    for (auto number: dv)
    {
        cout << number << endl;
    }
    
    cout << dv[1] << endl;
    
    return 0;
}













