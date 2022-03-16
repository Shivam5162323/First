// #include <iostream>
// using namespace std;

// class fb
// {
// public:
//     string uid;
//     int sn()
//     {
//         cout << "Enter UID" << endl;
//         cin >> uid;
//     }
//     int sdp()
//     {
//         cout << "UID : " << uid << endl;
//     }

//     int arr[5], i, s = 0;

//     int marks()
//     {
//         for (i = 0; i < 5; i++)
//         {
//             cout << "Enter marks of sub " << i + 1 << " : " << endl;
//             cin >> arr[i];
//             s = (s + arr[i]);
//         }
//     }
//     int display()
//     {
//         for (i = 0; i < 5; i++)
//         {
//             cout << "Marks of sub " << i + 1 << " : " << arr[i] << endl;
//         }
//         cout << "Sum = " << s << endl;
//     }
// };

// class marks : public fb
// {
// };

// class average : public fb
// {
// };

// int main()
// {
//     ccu obj;
//     obj.fn();
//     obj.sn();
//     obj.marks();
//     obj.fdp();
//     obj.sdp();
//     obj.display();
//     return 0;
// }





#include <iostream>
using namespace std;

int main(){
    int t;
    long long n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n>=6){
            n=n-6;
            l=l++;
        }
        int l=n/7;
        cout<<l<<endl;
    }
    return 0;
}