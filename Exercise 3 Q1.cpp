#include<iostream>
using namespace std;

int main()
{
	float price = 9.90 ;
	int quantity ;
	const int DISC = 10 ;
	double totalprice;
	cout << "The quantity of disc purchased : ";
	cin  >> quantity ;
	
	//calculation
	totalprice = (price * quantity) * (100 - DISC) / 100.00;
	
	cout << "The total price is " << totalprice << '\n';
	system("pause");
	return 0;
}
