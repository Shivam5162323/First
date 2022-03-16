#include <iostream>
using namespace std;

class construct{
    public:
        int a,b , temp;
        construct(int a, int b){
            cout<<"Before Swapping \na = "<<a<<"\nb = "<<b<<endl;
            temp=a;
            a=b;
            b=temp;
            cout<<"After Swapping \na = "<<a<<"\nb = "<<b<<endl;
        }
        
        // void swap(){
            
        // }  
      
};
int main(){
    construct c(10, 20);
    //c.swap();
    return 0;
}