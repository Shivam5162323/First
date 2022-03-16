#include <iostream>
using namespace std;

class pcu{
    public:
        string name,uid;
        int  n(){
            cout<<"Enter name and UID"<<endl;
            cin>>name>>uid;
        }
        int dp(){
            cout<<"Name : "<<name<<endl<<"UID : "<<uid<<endl;
        }
};

class ccu: public pcu{
    public:
        int arr[5],i,s = 0;
        int marks(){
            for( i=0;i<5;i++){
                cout<<"Enter marks of sub "<<i+1<<" : "<<endl;
                cin>>arr[i];
                s= (s+arr[i]);
            }
           
        }
        int display(){
               for( i=0;i<5;i++){
                cout<<"Marks of sub "<<i+1<<" : "<<arr[i]<<endl;
                
                
            }
            cout<<"Sum = "<<s<<endl;
        }
};

int main(){
    ccu obj;
    obj.n();
    obj.marks();
    obj.dp();
    obj.display();
    return 0;
}