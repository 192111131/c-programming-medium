#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"How many numbers do you want to add?";
	cin>>n;
	int arr[n];
	cout<<"\n Enter numbers:";
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	for(int i=0;i<n;i++)
		sum+=arr[i];
	
	cout<<"\n sum is:"<<sum;
	return 0;
}
