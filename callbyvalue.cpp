#include <iostream>
using namespace std;

// void swap(int a, int b){
//     int temp =a;
//     a=b;
//     b=temp;
// }

// int main(){;
//     int x = 8,y=6;
//     cout<<"Value of x before swapping is "<<x<<" and y : "<<y<<endl;
//     swap(x,y);
//     cout<<"Value of x after swapping is "<<x<<" and y : "<<y<<endl;
//     return 0;
// }

void swappointer(int* a, int* b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

int main(){;
    int x = 8,y=6;
    cout<<"Value of x before swapping is "<<x<<" and y : "<<y<<endl;
    swappointer(&x,&y);
    cout<<"Value of x after swapping is "<<x<<" and y : "<<y<<endl;
    return 0;
}