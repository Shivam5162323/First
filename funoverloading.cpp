#include <iostream>
using namespace std;

// Volume of cylinder
int volume(int r, int h){
    return (3.14*r*r*h);
}

// Volume of cube
int volume(int a){
    return (a*a*a);
}

// Volume of cuboid
int volume(int l, int b, int h){
    return (l*b*h);
}
int main(){
    cout<<"Volume of cuboid of  3, 7 and 6 is : "<<volume(3,7,6)<<endl;
    cout<<"Volume of cylinder of 3 and 6 is : "<<volume(3,6)<<endl;
    cout<<"Volume of cube of 3 is : "<<volume(3)<<endl;
    
    return 0;
}