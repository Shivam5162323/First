#include <iostream>
using namespace std;

class complex
{
    int re, img,real,imaginary;

public:
    void get(){
        cout<<"Enter real part and imaginary part"<<endl;
        cin>>re>>img;
    }
    void sum(complex c1, complex c2){
        real=c1.re + c2.re;
        imaginary=c1.img + c2.img;
    }
    void display(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};

int
main()
{
    complex c1,c2,c3;
    c1.get();
    c2.get();
    c3.sum(c1,c2);
    c3.display();
    return 0;
}