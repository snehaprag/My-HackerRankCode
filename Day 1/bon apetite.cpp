#include <iostream>
using namespace std;
int main()
{
	int n,i=0,j,actual=0, actual1=0,a[100],sum=0;
	cin>>n;
	cin>>j;
	for(i=0;i<n;i++)
	{
	 cin>>a[i];
	sum=sum+a[i];

	}

	cin>>actual;
	
    actual1=(sum-a[j])/2;cout<<actual<<endl;
	if(actual==actual1)
	{
		cout<<"Bon Appetit";
	}
	else
	{
	  cout<<actual-actual1;
	}
	return 0;
	
}
