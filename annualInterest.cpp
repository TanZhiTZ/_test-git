#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	const double interest = 0.03; 
	double depositAmt, totalAmt;
	
	cout << "Enter depositAmt : ";
	cin  >> depositAmt;
	
	totalAmt = depositAmt * interest + depositAmt;
	
	cout << fixed << setprecision(2);
	cout << "Total amount : " << totalAmt;
	
	return 0;
}
