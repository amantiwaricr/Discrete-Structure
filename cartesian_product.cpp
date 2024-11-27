#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],m,n,i,j;
	cout<<"Enter the number of elements of the set A: "<<endl;
	cin>>m;
	cout<<"Enter the"<<m<<"elements in set A: "<<endl;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the number of elements of the set B: "<<endl;
	cin>>n;
	cout<<"Enter the"<<n<<"elements in set B: "<<endl;
	for(j=0;j<n;j++)
	{
		cin>>b[j];
	}
	cout<<"Cartesian product of two sets: "<<endl;
	cout<<"{";
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		cout<<"{"<<a[i]<<","<<b[j]<<")";<<",";
		
		}
	}
	cout<<"}";
	return 0;
}
