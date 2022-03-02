/*#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    cout<<endl<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout << std::fixed;
    cout<<setprecision(3)<<d<<endl;
    cout<<setprecision(9)<<e<<endl;
    return 0;
}
*/

////////////////////////////////////////////////////////////////////////////////////////
/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, a,b;
    cin>>a;
    cout<<endl;
    cin>>b;
    cout<<endl;
    for(i=a;i<=b;i++){
        if(i>=1 && a<=9){
            switch(i){
                case 1:
                cout<<"one"<<endl;
                break;
                case 2:
                cout<<"two"<<endl;
                break;
                case 3:
                cout<<"three"<<endl;
                break;
                case 4:
                cout<<"four"<<endl;
                break;
                case 5:
                cout<<"five"<<endl;
                break;
                case 6:
                cout<<"six"<<endl;
                break;
                case 7:
                cout<<"seven"<<endl;
                break;
                case 8:
                cout<<"eight"<<endl;
                break;
                case 9:
                cout<<"nine"<<endl;
                break;
            }
            if(i>9){
                if(i%2==0){
                    cout<<"even"<<endl;
                }
                else{
                    cout<<"odd"<<endl;
                }
            }
        } 
          
        } 
            } */   
////////////////////////////////////////////////////////////////////////////////////
// *********************max of 4 nos**************************

/*
#include <bits/stdc++.h>
using namespace std;

int main(){;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int max;

    if(a>=b && a>=c && a>=d){
        
        max = a;
    }
    if(b>=c && b>=a && b>=d){
        
        max = b;
    }
    if(c>=b && c>=a && c>=d){
        
        max = c;
    }
    if(d>=b && d>=c && d>=a){
        
        max = d;
    }
    cout<<max<<endl;
    return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////
//***********adding and sub two nos***************
/*
#include<bits/stdc++.h>

using  namespace std;

int main(){
    int a,b,s,d;
    cin>>a>>b;
    if(a>0 && b>0){
        s=a+b;
        d=a-b;
    }    
    if(a==0 ){
        s = b;
        d = b;  
    }
    if(b==0 ){
        s = a;
        d = a;  
    }
    if(a!=0 && b!=0 && d<0){
         d =(-1) *d;
    }
    cout<<s<<endl;
    cout<<d<<endl;
    return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////
//***********************reversing the order***********************************
// #include <bits/stdc++.h>
// using namespace std;

// int main(){;
//     int n,a,b,c,d;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
        
        
//         cin>>arr[i];
//     }
//     for(int i=n-1;i>=0;i--){
        
        
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////
/*
#include<iostream>
using namespace std;

int main(){
    cout<<"SHIVAM 21BCS9382"<<endl; 
    int n,c,first=0,second=1,next;
    int a[20],i,j=0,count=0;
    cout<<"Enter the no. of terms "<<endl;
    cin>>n;
    cout<<"Terms of Fibonacci series are"<<endl;

    for(c=0;c<n;c++){
        if(c<=1)
            next=c;
        else{
            next=first+second;
            first=second;
            second=next;
        }

        cout<<next<<endl;
        if(next-first>1){
            for(i=first+1; i<next; i++){
            a[j]=i;
            count++;
            j++;
            }
         }
    }
    cout<<"Missing numbers of the Fibonacci series are:"<<endl;
    for(j=0; j<count; j++){
        cout<<a[j]<<endl;
        return 0;
    }
    

}
*/

// #include<iostream>

// using namespace std;

// int main()

// {

// int n,c,first=0,second=1,next;

// int a[20],i,j=0,count=0;

// cout<<"Enter the no. of terms of Fibonacci series=";

// cin>>n;

// cout<<"Terms of Fibonacci series are"<<endl;

// for(c=0;c<n;c++)
// {
// if(c<=1)
// next=c;
// else
// {

// next=first+second;

// first=second;

// second=next;

// }

// cout<<next<<endl;
// }
// // if(next-first>1)

// // {

// // for(i=first+1; i<next; i++)

// // {

// // a[j]=i;

// // count++;

// // j++;

// // }

// // }

// // }

// // cout<<"Missing numbers of the Fibonacci series are:"<<endl;

// // for(j=0; j<count; j++)

// // cout<<a[j]<<endl;

// return 0;

// }

// #include<iostream>
// using namespace std;

// int main()    
// {    
//     int n1=0,n2=1,n3,i,number;    
//     cout<<"Enter the number of elements:"<<endl;    
//     cin>>number;    
//     cout<<"\n"<<n1<<" "<<n2<<" ";//printing 0 and 1    
//     for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
//     {    
//         n3=n1+n2;    
//         cout<<n3<<" "; 

//         n1=n2;    
//         n2=n3;    
//     }  
//     cout<<"Missing numbers of the Fibonacci series are:"<<endl;
//     for(i=0; i<number; i++)
//     cout<<a[j]<<endl;
//     return 0;
//     return 0;  
//  } 








// #include<iostream>
// using namespace std;

// int main()    
// {    
//     int n1=0,n2=1,n3,i,j=0,number,c=0,arr[50];    
//     cout<<"Enter the number of elements:"<<endl;    
//     cin>>number;    
//     cout<<"\n"<<n1<<" "<<n2<<" ";
//     for(i=2;i<number;++i)
//     {    
//         n3=n1+n2;    
//         cout<<n3<<" ";
        
//         n1=n2; 
//         n2=n3;  
        
//        if(n3-n2>1){
//             for(i=n2+1; i<n3; i++){
                
//                 arr[j]=i;
//                 c++;
//                 j++;
                
     
//             }
//          } 
//           cout<<"happ"<<arr[3];
//     }  
//     cout<<"Missing numbers of the Fibonacci series are:"<<endl;
    
//     for(j=0; j<c; j++){
//         cout<<arr[j]<<endl;
//         //cout<<"hello";
//     }
//     //cout<<"hello";
//     return 0;  
//  } 








// #include<iostream>
// using namespace std;
// int main()
// {

// 	int n,c,n1=0,n2=1,n3;
// 	int a[50],i,j=0,count=0;
	
// 	cout<<"Enter the no. of terms of Fibonacci series=";
// 	cin>>n;
// 	cout<<"Terms of Fibonacci series are"<<endl;
// 	for(c=0;c<n;c++)
// 	{
// 		if(c<=1)	
// 		n3=c;
// 		else
// 		{
// 			n3=n1+n2;	
// 			n1=n2;
// 			n2=n3;
// 	    }	
// 		cout<<n3<<endl;
// 		if(n3-n1>1)
// 		{
// 			for(i=n1+1; i<n3; i++)	
// 			{
// 				a[j]=i;	
// 				count++;
// 				j++;
// 		    }
// 		}		
// 	}
// 	cout<<"Missing numbers of the Fibonacci series are:"<<endl;
// 	for(j=0; j<count; j++)
// 	cout<<a[j]<<endl;
// 	return 0;
// }


/*
#include <iostream>
using namespace std;

class student {
    private:
        string name;
        int roll;
    public:
        void get(){
            cout<<"Enter name "<<endl;
            cin>>name;
            cout<<"Enter roll no"<<endl;
            cin>>roll;
        }
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"Roll no : "<<roll<<endl;
        }
};



int main(){
    student a1,a2;
    a1.get();
    a1.display();
    return 0;
}
*/

#include <iostream>
using namespace std;

class(){
    private:

};
int main(){
    
    return 0;
}

