#include <iostream>

using namespace std;

class item
{
	static int count;
	
	public:
	void display()
	{
		cout << count<<endl;
	}

};	

	int item :: count;

int main()
{
	item a, b, c;
	
	a.display();
	b.display();
	c.display();

	return 0;
}
