#include<iostream>
#include<math.h>
using namespace std;
class simple
{
	int n,p,r,si,ci;
	public:
		void getdata()
		{
			cout<<"enter p,r and n value";
			cin>>p>>r>>n;
		}
		void display()
		{
			si=(p*r*n)/100;
			ci=p*pow((1+r/100),n);
			cout<<"simple"<<si;
			cout<<"compound"<<ci;
		}
};
int main()
{
	simple s;
	s.getdata();
	s.display();
}
