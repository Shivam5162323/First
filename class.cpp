#include <iostream>
using namespace std;

class emp
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    };
    void getdata()sjai
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
        cout << "The value of d is : " << d << endl;
        cout << "The value of e is : " << e << endl;
    }
    string getvalue()
    {
        return "helo";
    }
};

// void emp :: setdata(int a1,int b1,int c1){
//     a=a1;
//     b=b1;
//     c=c1;
// }

int main()
{
    emp harry;
    // harry.a =5;  ---> This will show error
    harry.d = 34;
    harry.e = 53;
    harry.setdata(1, 2, 6);
    harry.getdata();
    harry.getvalue();
    cout<<harry.getvalue();
    return 0;
}
