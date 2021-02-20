#include<iostream>
using namespace std;
int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"You are"<<age<<"yrs old";
    char grade;
    cout<<"Enter your grade";
    cin>>grade;
    cout<<"You have got"<<grade<<"in your exam";
    cin.clear();
    cin.sync();
    string name;
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Hello "<<name;


   
}