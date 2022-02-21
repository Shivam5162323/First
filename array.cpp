#include <iostream>
using namespace std;

int main(){;
    int arr[4] = {23,53,345,5673};
    for(int i=0;i<4;i++){
        cout<<"Value of arr["<<i<<"] is "<<arr[i]<<endl;
    }
    cout<<endl;
    //Pointers and arrays
    int* p = arr;
    for(int i=0;i<4;i++){
        cout<<"Value of arr["<<i<<"] is "<<*(p+i)<<endl;
    }
    return 0;
}