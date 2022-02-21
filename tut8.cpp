#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //Manipulators ------1. endl     2.setw
    int a = 2, b=344,c = 4312;
    cout<<"The value of a without setw is"<<a<<endl;
    cout<<"The value of b without setw is"<<b<<endl;
    cout<<"The value of c without setw is"<<c<<endl<<endl;
    cout<<"The value of a is"<<setw(4)<<a<<endl;
    cout<<"The value of b is"<<setw(4)<<b<<endl;
    cout<<"The value of c is"<<setw(4)<<c<<endl;
}