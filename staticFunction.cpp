#include <iostream>
using namespace std;

class emp
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "\nEnter id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "ID of this employee is " << id << " and his employee number is " << count << endl;
    }

    static void  getCount(void){// static funtion can only acess static variable only.
        cout<<"The value of count is "<<count;
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
    emp :: getCount();

    rohan.setData();
    rohan.getData();
    emp :: getCount();

    abhi.setData();
    abhi.getData();
    emp :: getCount();

    return 0;
}