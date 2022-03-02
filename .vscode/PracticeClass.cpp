// #include <iostream>
// using namespace std;
// #include <string>

// class student
// {
// public:
//     string name;
//     int roll_no;
// } ;
// int main()
// {
//     student s;
//     s.name = "Shiv";
//     s.roll_no = 2;
//     cout << s.name << endl;
//     cout << s.roll_no << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout<<"SHIVAM 21BCS9382"<<endl;
//     int b, i, j, w, lr = 0, lc = 0, n, m;
//     int a[10][10];
//     cout << "enter the no. of rows in matrix"<<endl;
//     cin >> m;
//     cout << "enter no. of columns in matrix"<<endl;
//     cin >> n;
//     cout << "enter the elements in matrix"<<endl;
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     cout << "enter the base address"<<endl;
//     cin >> b;
//     cout << "enter the storage size of one element stored in array"<<endl;
//     cin >> w;
//     i = m - 1;
//     j = n - 1;
//     cout << "address of A[i][j]" << b + w * (n * (i - lr) + (j - lc));
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Employee
// {
//     char Name[25];
//     int Age;
//     char Desg[8];
//     long Salary;
// public:
//     void GetData();
//     void PutData();
// };

// void Employee ::GetData()
// {
//     cout << "\n\tEnter Employee Name : ";
//     cin >> Name;
//     cout << "\n\tEnter Employee Age : ";
//     cin >> Age;
//     cout << "\n\tEnter Employee Designation:";
//     cin >> Desg;
//     cout << "\n\tEnter Employee Salary : ";
//     cin >> Salary;
// }
// void Employee ::PutData()
// {
//     cout << "\nEmployee Name : " << Name;
//     cout << "\nEmployee Age : " << Age;
//     cout << "\nEmployee Designation:" << Desg;
//     cout << "\nEmployee Salary : " << Salary;
// }

// int main()
// {
//     Employee E[2];
//     int i;
//     for (i = 0; i < 2; i++)
//     {
//         E[i].GetData();
//     }
//     for (i = 0; i < 2; i++)
//     {
//         E[i].PutData();
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int my_variable = 10; // Global x

int main()

{
    cout<<"SHIVAM 21BCS9382"<<endl;
    int my_variable = 100; // Local x
    cout << "Value of global my_variable is " << ::my_variable << endl;
    cout << "Value of local my_variable is " << my_variable << endl;
    return 0;
}

