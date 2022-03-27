#include<iostream>
void cheers(int n);
double cube(double x);

int main()
{
	using namespace std;
	
	cheers(5);
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "num: ";
	cout << volume << endl;
	cheers(cube(2.2));

	system("pause");
	return 0;
}

void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}
double cube(double x)
{
	return x * x * x;
}