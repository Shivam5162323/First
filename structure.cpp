#include<iostream>
using namespace std;

struct emp
{
    int age;
    char favchar;
    float salary;
};
int main(){;
    struct emp harry;
    harry.age=21;
    harry.favchar='e';
    harry.salary = 4343443.3234;
    cout<<harry.age<<endl;
    cout<<harry.favchar<<endl;
    cout<<harry.salary<<endl;
    return 0;
}