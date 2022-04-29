#include <iostream>

using namespace std;

int main ()
{
	int age, year;
	
	cin  >> age >> year;
	
	while (age <= 100)
	{cout << age << "  " << year;
	cout << "\n";
	age = age + 1;
	year = year + 1;
	}
	
	return 0;
}
