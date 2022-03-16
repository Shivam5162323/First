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

// #include <iostream>
// using namespace std;

// class emp
// {
//     int id;
//     static int count;

// public:
//     void setData(void)
//     {
//         cout << "\nEnter id " << endl;
//         cin >> id;
//         count++;
//     }
//     void getData(void)
//     {
//         cout << "Seat no  " << id << " and his employee number is " << count << endl;
//     }

//     static void  getCount(void){// static funtion can only acess static variable only.
//         cout<<"The value of count is "<<count;
//     }
// };

// int emp ::count = 1; // if u only write "int emp :: count;" default value will be 0

// int main()
// {
//     emp harry, rohan, abhi;
//     // harry.id=32 ----> it will give error as id is private
//     // harry.count=32 ----> it will give error as count is private
//     for(int i =1;i<=50;i++){
//         seat name ( )
//         harry.setData();
//     }

//     harry.setData();
//     harry.getData();
//     emp :: getCount();

//     rohan.setData();
//     rohan.getData();
//     emp :: getCount();

//     abhi.setData();
//     abhi.getData();
//     emp :: getCount();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// #define MAX(a, b, c) (a > b && a > c ? a : (b > c ? b : c))
// #define MIN(a, b, c) (a < b && a < c ? a : (b < c ? b : c))

// int main()
// {
//     int x, y, z, large, small;
//     cout << "\n\nEnter 3 numbers: ";
//     cin>>x>>y>>z;
//     large = MAX(x, y, z);
//     small = MIN(x, y, z);
//     cout << "\nMax between" << x << ", " << y << ", "<< "and " << z << " is " << large;
//     cout << "\nMin between" << x << ", " << y << ", "<< "and " << z << " is " << small;
//     return 0;
// }

#include <iostream>
#define MAX_SIZE 50
using namespace std;

class Guest
{
public:
char name[50]; int seatno;
};

class Hall
{
public:
    static int front, rear;
    static Guest allGuest[MAX_SIZE];
    static int alloteSeat()
    {
        if (rear == (MAX_SIZE - 1))
        {
            cout << "Hall is full!";
            return 0;
        }
        rear++;
        cout << "Enter Guest Name: ";
        cin >> allGuest[rear].name;
        allGuest[rear].seatno = rear + 1;
        return 1;
    }

    static void listGuest()
    {
        while (++front <= rear)
        {
            cout << "\nGuest " << allGuest[front].name << " is seated on seat S" << allGuest[front].seatno << ".";
        }
        rear = front = -1;
    }
};

int Hall::front = -1;
int Hall::rear = -1;
Guest Hall::allGuest[MAX_SIZE] = {};

int main()
{

    Hall::alloteSeat();
    Hall::alloteSeat();
    Hall::alloteSeat();
    Hall::alloteSeat();
    Hall::listGuest();
    return 0;
}

// #include <iostream>
// using namespace std;
// class class_2;
// class class_1
// {
// protected:
//     int num1;

// public:
//     class_1()
//     {
//         num1 = 10;
//     }
//     void show()
//     {
//         cout << "\n Value of Class 1 : " << num1;
//     }
//     friend void swap(class_1 *num1, class_2 *num2);
// };

// class class_2
// {
// protected:
//     int num2;

// public:
//     class_2()
//     {
//         num2 = 20;
//     }
//     void show()
//     {
//         cout << "\n Value of Class 2 : " << num2;
//     }
//     friend void swap(class_1 *num1, class_2 *num2);
// };

// void swap(class_1 *no1, class_2 *no2)
// {
//     int no3;
//     no3 = no1->num1;
//     no1->num1 = no2->num2;
//     no2->num2 = no3;
// }

// int main()
// {
//     class_1 a;
//     class_2 b;
//     cout << "Values befor Swap";
//     a.show();
//     b.show();
//     swap(&a, &b);
//     cout << "\n\nValues after Swap";
//     a.show();
//     b.show();
//     return 0;
// }

// #include<iostream> 
// using namespace std;

// class complex
// {
// private:
//     float r;
//     float i;

// public:
//     void set(float real, float img)
//     {
//         r = real;
//         i = img;
//     }
//     complex sum(complex c)
//     {
//         complex t;
//         t.r = r + c.r;
//         t.i = i + c.i;
//         return t;
//     }
//     void disp()
//     {
//         if (i == -1)
//         {
//             cout << r << " + -i" << endl;
//         }
//         else if (i == 1)
//         {
//             cout << r << " + i" << endl;
//         }
//         else if (i == 0)
//         {
//             cout << r << endl;
//         }
//         else
//         {
//             cout << r << " + " << i << "i" << endl;
//         }
//     }
// };

// int main()
// {

//     complex c1, c2, c3;
//     c1.set(2.5, 3.5);
//     c2.set(1.5, 5.5);
//     c3 = c1.sum(c2);
//     cout<<"Complex Number 1 = ";
//     c1.disp();
//     cout<<"Complex Number 2 = ";
//     c2.disp();
//     cout << "Complex Number 3 = ";
//     c3.disp();
//     return 0;
// }
