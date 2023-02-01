#include<iostream>
using namespace std;
class circle
{
	float r,a,c;
	public:
		void getdata()
		{
			cout<<"enter a radius";
			cin>>r;
		}
		void display()
		{
			a=3.14*r*r;
			c=2*3.14*r;
			cout<<"area of circle"<<a;
			cout<<"\ncircumference of a circle"<<c;
		}
};
int main()
{
	circle c;
	c.getdata();
	c.display();
}
