#include <iostream>
using namespace std;

int main(){;
    int a =4;
    int* b =&a;

    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of a is "<<b<<endl;
    cout<<"Addr of a is "<<*b<<endl;
    cout<<"value  of a is "<<*&a<<endl;
    
    // POINTER TO POINTER
    int** c=&b;
    cout<<"\nAddress of b is "<<c<<endl;
    cout<<"Address of b is "<<&b<<endl;
    cout<<"Value of Address at c is "<<*c<<endl;
    cout<<"Value of Address value  at c is "<<**c<<endl;
    return 0;
}