// #include <iostream>
// using namespace std;
// class stud
// {
//     private:
//    string name;
//    int  rollNo;
//    int height;
//    int weight;
//    public:
//    stud(string n,int r,int h,int w)
//  {
//    name=n;
//    rollNo=r;
//    height=h;
//    weight=w;
//     }
//     void display(void);
//   ~stud();
// };
// void stud::display(void){
//    cout << "Student details:\n";
//    cout << "NAME:"<<name<<"\nUID:"<<rollNo<<"\nHEIGHT:"<<height<<"\nWEIGHT"<<weight;
// }
// stud :: ~stud()
// {
//    cout<<"\ndestructor is called\n";
// }
// int main()
// {
//   stud std("agfgdf",332,6,82);
//  stud std1=std;
//   std1.display();
//     return 0;
// }
#include <iostream>

using namespace std;

 

int i;

 

class A

{

public:

   ~A()

   {

       i=10;

   }

};

 

int foo()

{

   i=3;

   A ob;

   return i;

}

 

int main()

{

   cout << foo() << endl;

   return 0;

}