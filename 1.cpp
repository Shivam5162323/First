/*
#include <iostream>
using namespace std;

int main(){
    cout<<"SHIVAM 21BCS9382"<<endl;
    int a;
    float sum;
    char name,uid;
    cout<<"Enter marks"<<endl;
    for(int i=0;i<5;i++){
         cin>>a;
        sum=sum + a;
    }
   
    cout<<"Sum = "<<sum<<endl;
    float avg = sum/5;
    cout<<"Avg = "<<avg<<endl;
    return 0;
 }




#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"SHIVAM 21BCS9382"<<endl; 
    int n, f, l, s, nd, res, a, b;
    cout << " Enter a number: ";
    cin >> n;
    nd = (int)log10(n);
    f = n / pow(10, nd);
    l = n % 10;
    a = f * (pow(10, nd));
    b = n % a;
    n = b / 10;
    res = l * (pow(10, nd)) + (n * 10 + f);
    cout << " Number after swaping the first and last digits is : " << res << endl;
}  
*/





// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"SHIVAM 21BCS9382"<<endl; 
//     int n,c,first=0,second=1,next;
//     int a[20],i,j=0,count=0;
//     cout<<"Enter the no. of terms "<<endl;
//     cin>>n;
//     cout<<"Terms of Fibonacci series are"<<endl;

//     for(c=0;c<n;c++){-
//         if(c<=1)
//             next=c;
//         else{
//             next=first+second;
//             first=second;
//             second=next;
//         }

//         cout<<next<<endl;
//         if(next-first>1){
//             for(i=first+1; i<next; i++){
//             a[j]=i;
//             count++;
//             j++;
//             }
//          }
//     }
//     cout<<"Missing numbers of the Fibonacci series are:"<<endl;
//     for(j=0; j<count; j++)
//     cout<<a[j]<<endl;
//     return 0;

// }


#include<iostream>
using namespace std;

int main()    
{    
    int n1=0,n2=1,n3,i,number;    
    cout<<"Enter the number of elements:"<<endl;    
    cin>>number;    
    cout<<"\n"<<n1<<" "<<n2<<" ";//printing 0 and 1    
    for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
    {    
        n3=n1+n2;    
        cout<<n3<<" "; 

        n1=n2;    
        n2=n3;    
    }  
    
    return 0;  
 } 







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
          
//     }  
//     cout<<"Missing numbers of the Fibonacci series are:"<<endl;
    
//     for(j=0; j<c; j++){
//         cout<<arr[j]<<endl;
//         //cout<<"hello";
//     }
//     //cout<<"hello";
//     return 0;  
//  } 