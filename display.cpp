#include  <iostream>
using namespace std;

class  Sum
{ int x,y;

public :
	Sum()
	{ 
	cout<<"Enter the Real number = ";
	cin>>x;
    cout<<"Enter the imaginary number = ";
	cin>>y;
	}
void display()
{
	cout<<"Addition  : "<<y<<"i"<<"+"<<x;
}
};
int main ()
{
	Sum obj;
	obj.display();
}
