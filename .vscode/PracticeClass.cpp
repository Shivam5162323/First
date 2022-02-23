#include <iostream>
using namespace std;
#include <string>

class student
{
public:
    string name;
    int roll_no;
} ;
int main()
{
    student s;
    s.name = "Shiv";
    s.roll_no = 2;
    cout << s.name << endl;
    cout << s.roll_no << endl;

    return 0;
}