#include <iostream>
using namespace std;

int main() {
	int i=1,j,n,sum=0;
	cout<<"enter a number";
	cin>>n;
	cout<<"\nSum of all even numbers upto "<<n<<" is ";
	
	while(i<=(n+1)/2)
	{j=2*i-1;
             sum+=j;
	i++;
	}
	cout<<sum;
	return 0;
}

   
