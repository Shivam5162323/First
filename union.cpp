#include <bits/stdc++.h>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};
int main(){;
    union money m1;
    m1.rice=4;
    m1.car='b';
    m1.pounds=65.567;
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;
    cout<<m1.pounds<<endl;
    cout<< "Memory size occupied by data : "<<sizeof(m1.rice)<<"\t"<< sizeof(m1.car)<<"\t"<< sizeof(m1.pounds);
    return 0;
}
