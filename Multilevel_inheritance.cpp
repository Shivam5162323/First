#include <iostream>
using namespace std;

class fb{
    public:
        string name;
        int  fn(){
            cout<<"Enter name "<<endl;
            cin>>name;
        }
        int fdp(){
            cout<<"Name : "<<name<<endl;
        }
};

class sb:public fb{
    public:
        string uid;
        int  sn(){
            cout<<"Enter UID"<<endl;
            cin>>uid;
        }
        int sdp(){
            cout<<"UID : "<<uid<<endl;
        }
};

class ccu: public sb{
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
    obj.fn();
    obj.sn();
    obj.marks();
    obj.fdp();
    obj.sdp();
    obj.display();
    return 0;
}