#include "std_lib_facilities.h"



int main(){
    int var = 17;
    int *ptr = &var;
    cout << "var: " << var << endl;
    cout << "*ptr: "  << *ptr << endl; 


    int x = 17;
    int* pi = &x;
    cout << "x: " << x << endl;
    cout << "pi :" << pi << endl;
    
    double e = 2.71828;
    double* pd = &e;

    cout << "e: " << e << endl;
    cout << "pd :" << pd << endl; 


    *pi = 27;
    *pd = 3.14;

    cout << "*pi: " << *pi << endl;
    cout << "*pd: " << *pd << endl;

    *pd = *pi;
    
    cout << "*pi: " << *pi << endl;
    cout << "*pd: " << *pd << endl;


    //int i = pi;
    //pi = 7;
    //char* pc = pi;






    return 0;





}