#include<iostream>
using namespace std;
int main() {
    string name="Fahim";
    cout <<"My name is"<< name << endl;
    cout<<"I like her.\n";
    cout<<name.length()<<endl;
    cout<<name[1]<<endl;
    name[1] = 'd' //replace 1st index to 'd'
    cout<<name[1]<<endl;
    cout<<name.find("him",0)<<endl; //count "him" from 0 index
    cout<<name.substr(4,3) << endl;
}