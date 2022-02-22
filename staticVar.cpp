#include <iostream>
using namespace std;

class emp
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "ID of this employee is " << id << " and his employee number is " << count << endl;
    }
};

int emp ::count = 1000; // if u only write "int emp :: count;" default value will be 0

int main()
{
    emp harry, rohan, abhi;
    // harry.id=32 ----> it will give error as id is private
    // harry.count=32 ----> it will give error as count is private

    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();

    abhi.setData();
    abhi.getData();

    return 0;
}