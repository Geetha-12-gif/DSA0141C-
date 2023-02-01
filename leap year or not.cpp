#include<iostream>
using namespace std;
class number
{
	int n;
	public:
		void getdata()
		{
			cout<<"enter a number";
			cin>>n;
		}
		void display()
		{
			if(n%2==0)
			{
				cout<<"even number";
			}
			else
			{
				cout<<"odd number";
			}
		}
};
int main()
{
	number n;
	n.getdata();
	n.display();
}
