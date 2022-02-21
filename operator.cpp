#include<iostream>

using namespace std;

int main(){
    int a=4,b=5;
    cout<<"Operators in C++ "<<endl;
    cout<<"following are Operators in C++ "<<endl;
    //Airthimatic Operators
    cout<<"a+b = "<<a+b<<endl;
    cout<<"a-b = "<<a-b<<endl;
    cout<<"a*b = "<<a*b<<endl;
    cout<<"a/b = "<<a/b<<endl;
    cout<<"a%b = "<<a%b<<endl;
    cout<<"a++ = "<<a++<<endl;
    cout<<"a-- = "<<a--<<endl;
    cout<<"++a = "<<++a<<endl;
    cout<<"--a = "<<--a<<endl;
    
    cout<<endl;

    cout<<"the following are the comparison operators "<<endl;
    cout<<"a==b "<<(a==b)<<endl;
    cout<<"a!=b "<<(a!=b)<<endl;
    cout<<"a>=b "<<(a>=b)<<endl;
    cout<<"a<=b "<<(a<=b)<<endl;
    cout<<"a>b  "<<(a>b)<<endl;
    cout<<"a<b  "<<(a<b)<<endl;

    cout<<"\nLogical Operators in C++ \n";
    cout<<"\nvalue of and operator ((a==b) && (a<b)) is :"<<((a==b) && (a<b))<<endl;
    cout<<"value of or operator  ((a==b) || (a<b)) is :"<<((a==b) || (a<b))<<endl;
    cout<<"value of not operator (!(a==b))         is :"<<(!(a==b))        <<endl;
    cout<<endl;
    return 0;
}