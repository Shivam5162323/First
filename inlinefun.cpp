#include <iostream>
using namespace std;

int product(int a,int b){
    static int c=0;//this will only work once means this 
    c=c+1;         // line will be useless when cursor returns second time 
    return a*b+c;
}
int main(){;
    int a,b;
    cout<<"Enter value of a and b"<<endl;
    cin>>a>>b;
    cout<<"Product of a and b is : "<<product(a,b)<<endl;
    cout<<"Product of a and b is : "<<product(a,b)<<endl;
    cout<<"Product of a and b is : "<<product(a,b)<<endl;
    cout<<"Product of a and b is : "<<product(a,b)<<endl;
    cout<<"Product of a and b is : "<<product(a,b)<<endl;
    cout<<"Product of a and b is : "<<product(a,b)<<endl;
    cout<<"Product of a and b is : "<<product(a,b)<<endl;
    cout<<"Product of a and b is : "<<product(a,b)<<endl;
    cout<<"Product of a and b is : "<<product(a,b)<<endl;
    return 0;
}