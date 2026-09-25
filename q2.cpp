#include <iostream>
using namespace std;

class ClassA
{
	public:
		void show()
		{
			cout<<"this is Class A" << endl;
			
		}
 };
	class ClassB
	{
		public:
			void show()
			{
				cout<<"this is called Class B" << endl;
				
			}
	};
	class ClassC : public ClassA, public ClassB
	{
	};
	int main()
	{
		ClassC obj;
		obj.ClassA::show();
		obj.ClassB::show();
		return 0;
	}
