#include<iostream>

using namespace std;

int main(){
    int i,n,se,so,c=1;
    cout<<"How many even no u wanna print!!";
    cin>>n;
    cout<<"*****************EVEN NO'S********************"<<endl;
    for(i=1;i<2*n+1;i++){
        if(i%2==0){
            cout<<i<<" ";
            i++;
        } 
    }
    return 0;
}



