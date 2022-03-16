#include <iostream>
using namespace std;
inline int max(int a, int b, int c);
inline int min(int a, int b, int c);
    
int main(){
    int a,b,c,m,n;
    cin>>a>>b>>c;
    m=max(a,b,c);
    cout<<"greatest is "<<m<<endl;
    n=min(a,b,c);
    cout<<"Smallest is "<<n<<endl;
    return 0;
}

int max(int a ,int b,int c){
    
    if(a>b && a>c){
        return a;
    }
    else if(b>c){
    return b;
    }
    else {
            return c;}
    
}

int min(int a ,int b,int c){
    
        if(a<b && a<c){
            return a;
        }
        else if(b<c){
            return b;
        }
        else{
            return c;}
    
}