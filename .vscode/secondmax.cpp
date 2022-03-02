#include <iostream>
using namespace std;

int main(){
    int n,a,b,c,s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a>b && a<c){
            cout<<a<<endl;
        }
        if(a<b && a>c){
            cout<<a<<endl;
        }
        if(b<a && b>c){
            cout<<b<<endl;
        }
        if(b>a && b<c){
            cout<<b<<endl;
        }
        if(c<a && c>b){
            cout<<c<<endl;
        }
        if(c>a && c<b){
            cout<<c<<endl;
        }
        
    }
    return 0;
}