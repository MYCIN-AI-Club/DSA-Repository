#include <iostream>
using namespace std;

int main() {
	int test,s=0;
	cin>>test;
	while(test--)
	{long long int n;
	     cin>>n;
	    if(n==1)
	    cout<<"no"<<endl;
	    else
	    {
	for(int i=2;i*i<=n;i++)
	{
	    if(n%i==0)
	    s++;
	}
	if(s>0)
	cout<<"no"<<endl;
	else
	cout<<"yes"<<endl;
	s=0;
	    }
	}
	return 0;
	
}