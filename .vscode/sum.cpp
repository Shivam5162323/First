#include <iostream>
using namespace std;

int main(){
    int n,a,b,s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cout<<a+b<<endl;
    }
    
    return 0;
}
// You don't need to add/edit anything to the below solution. 
// Click on the SUBMIT button to solve your first problem on CodeChef.

// bits/stdc++.h works in linux. 
// It loads most of the libraries of C++ required.
// #include <bits/stdc++.h> 

// using namespace std;

// int main() {
// 	// Read the number of test cases.
// 	int T;
// 	scanf("%d", &T);
// 	while (T--) {
// 		// Read the input a, b
// 		int a, b;
// 		scanf("%d %d", &a, &b);

// 		// Compute the ans.
// 		int ans = a + b;
// 		printf("%d\n", ans);
// 	}

// 	return 0;
// }