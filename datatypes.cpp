//this program is showing the various data types in c++ ,interger =int ,character = ch, bool= true/false, float=small decimal,double=big decimal
#include<iostream>
using namespace std;
int main(){
    int a = 456;
    cout<<a<< endl;
    char b = 'v';
    cout<<b<< endl;
    bool bl = true;
    cout<<bl<< endl;
    float f = 1.6;
    cout<<f<< endl;
    double d = 1.645;
    cout<<d<< endl;
    int size  = sizeof(a);
    cout << "size of a is :" << size << endl;
    return 0;


    }