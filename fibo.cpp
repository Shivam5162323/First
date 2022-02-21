#include<iostream>
using namespace std;
int main()
{
    cout<<"SHIVAM 21BCS9382"<<endl; 
	int n,c,n1=0,n2=1,n3;
	int a[50],i,j=0,count=0;
	
	cout<<"Terms of Fibonacci series are ";
	cin>>n;
	cout<<"\n"<<n1<<" "<<n2<<" ";
	    
    for(i=2;i<n;++i)//loop starts from 2 because 0 and 1 are already printed    
    {    
        n3=n1+n2;    
        cout<<n3<<" "; 

        n1=n2;    
        n2=n3;    
    
		
		if(n3-n1>1)
		{
			for(i=n1+1; i<n3; i++)	
			{
				a[j]=i;	
				count++;
				j++;
		    }
		}		
	}
	cout<<"\nMissing numbers of the Fibonacci series are:"<<endl;
	for(j=0; j<count; j++)
	cout<<a[j]<<endl;
	return 0;
}
