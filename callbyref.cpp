#include <iostream>
using namespace std;

void swaprefvar(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}

int main(){;
    int x = 8,y=6;
    cout<<"Value of x before swapping is "<<x<<" and y : "<<y<<endl;
    swaprefvar(x,y);
    cout<<"Value of x after swapping is "<<x<<" and y : "<<y<<endl;
    return 0;
}