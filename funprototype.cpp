#include <iostream>
using namespace std;

//Function Prototyping
//type -  function name(Arguments); 

int sum(int a, int b);

int main(){;
    int num1,num2;
    cout<<"Enter 1st value"<<endl;
    cin>>num1;
    cout<<"Enter 2nd value"<<endl;
    cin>>num2;

    cout<<"The sum of these no's is "<<sum(num1,num2)<<endl<<endl;
    return 0;
}

int sum(int a,int b){
    int c=a+b;
    return c;
}