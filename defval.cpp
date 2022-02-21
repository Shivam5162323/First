#include <iostream>
using namespace std;

int marks(int a, int b, int c=34){
    int sum = a+b+c;
    cout<<sum;
    return sum;
}
int main(){;
    int a,b,c;
    cout<<"Sum = "<<marks(50,50)<<endl;
    return 0;
}