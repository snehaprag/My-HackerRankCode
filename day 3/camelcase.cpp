# include <iostream>
# include <string>
using namespace std;
int main()
{
     string name;
	cin>>name;
	int s= name.length();
	int word=1;
	for (int i=0;i<s;i++)
	if(name[i]<97)

	word++;
	
	cout<<word;
	 
	return 0;
}

