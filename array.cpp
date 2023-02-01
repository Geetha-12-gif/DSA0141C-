#include<iostream>
using namespace std;
class array
{
	int n,a[10],i,j;
	public:
		void getdata()
		{
			cout<<"enter n value";
			cin>>n;
		}
		void input()
		{
			for(i=1;i<=n;i++)
			{
				cin>>a[i];
			}
		}
		void display()
		{
			for(j=1;j<=n;j++)
			{
				cout<<a[j];
			}
		}
};
int main()
{
	array a;
	a.getdata();
	a.input();
	a.display();
}
