# my-cpp-practise

## oop.cpp

```cpp
#include <iostream>
using namespace std;

class A1
{
	int count;
	public :
		A1()
		{
			count = 5 ;
		}
		void operator ++()
		{
			count = ++count; 
		}
		void display()
		{
			cout<<"After overloading = "<<count;
		}
};

int main()
{
	A1 obj;
	++ obj;
	obj.display ();
}


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
```
