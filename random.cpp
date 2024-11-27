#include<iostream>
using namespace std;
int main()
{
	cout<<"Tautology - \n";
	cout<<"p\t"<<"q\t"<<"(p^q)\t"<<"(pvq)\t"<<"(p^q)->(pvq)"<<endl;
	for(int p=0;p<2;p++)
	{
		for(int q=0;q<2;q++)
		{
			int conjunc=p&&q; //AND
			int disjunc=p||q; //OR
			int result=0;

			if(conjunc==1 & disjunc==0)
				result=0;
			else
				result=1;

			cout<<p<<"\t"<<q<<"\t"<<conjunc<<"\t"<<disjunc<<"\t\t"<<result<<endl;
		}
	}
	return 0;
}

