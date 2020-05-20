
#include<iostream>

using namespace std;


double potega(double a, double b)
{
	if (b == 0)return 1;
	else
		return a = a * potega(a, --b);
}


int main()
{
	cout << potega(3, 3);
	
	system("pause");
	return 0;
}