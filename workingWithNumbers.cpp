#include<iostream>
#include<cmath> 
using namespace std;
int main() {
    cout<<4+5<<endl;
    cout<<5-3<<endl;
    cout<<4*6<<endl;
    cout<<6/2<<endl;
    cout<<11%4<<endl;
    int num=15;
    num++;
    cout<<num<<endl;
    num+=80;
    cout<<num<<endl;

    num--;
    cout<<num<<endl;

    double d=5.59;

    cout<<5 + 9.85 << endl;
    cout<<5.0 + 5.0 << endl;

    cout<<pow(5, 2) << endl; // 5^2
    cout<<round(5.96) << endl;
    cout<<floor(5.96) << endl;
    cout<<ceil(5.96) << endl;
    cout<<sqrt(36) << endl;
    cout<<fmax(5, 100) << endl; // max of two numbers
    cout<<fmin(5, 100) << endl; // min of two numbers

    return 0;
    
}