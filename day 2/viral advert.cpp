#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int a[5]={5,6,9,12,18};
	int n,i,floor,sum=0;
 
    cin>>n;
	for(i=0;i<n;i++) 
	 floor=a[i]/2;cout<<floor<<endl;
	 sum=sum+floor;cout<<sum<<endl;
	 
	 cout<<sum;
	return 0;
	
}
