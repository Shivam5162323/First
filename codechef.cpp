
#include <iostream>
using namespace std;

int main(){
    int t,v;
    long int n,x,k;
    cin>>t;
    while(t--){
        cin>>n>>x>>k;
        v= k/x;
        if(n<v){
            cout<<n<<endl;
        }
        else
            cout<<v<<endl;
    }
    return 0;
}