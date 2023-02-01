#include<iostream>
using namespace std;
class sort
{
	int n,a[100],i,j,temp;
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
			for(i=1;i<=n;i++)
			{
				for(j=i+1;j<=n;j++)
				{
					if(a[i]<a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
				cout<<a[i];
			}
		}
};
int main()
{
	sort s;
	s.getdata();
	s.input();
	s.display();
}
