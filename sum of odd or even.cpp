#include<iostream>
using namespace std;
class array
{
	int n,a[20],i,j,e=0,o=0;
	public:
		void getdata()
		{
			cout<<"enter a n value";
			cin>>n;
		}
		void input()
		{
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void display()
		{
			for(i=0;i<n;i++)
			{
				if(a[i]%2==0)
				{
					e=e+a[i];
				}
				else
				{
					o=o+a[i];
				}
			}
				cout<<"sum of even numbers"<<e;
				cout<<"\nsum of odd numbers"<<o;
		}
};
int main()
{
	array a;
	a.getdata();
	a.input();
	a.display();
	return 0;
}
