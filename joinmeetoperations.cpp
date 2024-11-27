#include<iostream>
using namespace std;
int join()
{
	int x,y;
	cout<<"Enter the number of elements in row: ";
	cin>>x;
	cout<<"Enter the number of elements in column: ";
	cin>>y;
	int a[x][y], b[x][y];
	cout<<"Enter the elements of matrix A:\n";
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements of matrix B:\n";
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Joint opertation of matrix A and B: "<<endl;
	for(int i=0;i<x;i++)
	{
		cout<<"|";
		for(int j=0;j<y;j++)
		{
			int result=a[x][y]||b[x][y];
			cout<<" ";
			cout<<result;
			cout<<" ";
		}
		cout<<"|\n"<<endl;
	}
}
int meet()
{
	int a[2][2], b[2][2];
	cout<<"Enter the elements of matrix A:\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements of matrix B:\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Meet opertation of matrix A and B: "<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			int result=a[i][j]&&b[i][j];
			cout<<" "<<result<<"\t";
		}
			cout<<"\n";
		}
}
int main()
{
    int choice;

    cout<<"1. JOIN OPERATIONS:"<<endl;
    cout<<"2. MEET OPERATIONS:"<<endl;
    cout<<"3. EXIT"<<endl;

     cout<<"enter your choice (1-3)"<<endl;
    cin>>choice;

    if(choice==1){
        join();
        cout<<endl;
    }
    else if(choice==2){
        meet();
        cout<<endl;
    }
    else if(choice==3){
        cout<<"exiting______";

    }
    else{
        cout<<"invalid choice";
    }
    return 0;
}

