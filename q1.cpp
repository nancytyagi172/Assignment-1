#include<iostream>
using namespace std;
class rectangle
{
	int length, breadth;
	
public:
	rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}
	
	int area()
	{
		return length * breadth;
		
	}
	int perimeter()
	{
		return 2 * (length + breadth);
		
	}
};
int main()
{
	int length, breadth;
	cout<<"enter length:";
	cin>>length;
	
	cout<<"enter breadth:";
	cin>>breadth;
	rectangle r(length, breadth);
	cout<<"area = "<< r.area() << endl;
	cout<<"perimeter = "<< r.perimeter() << endl;
	return 0;
		
	
	
	
	}
