#include <iostream>

using namespace std;

int main()
{
	int n, i;
	cout << "Vvedite N\n";
	cin >> n;
	int* a = new int[n];
	for (i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	for (i = 0; i <= n / 2;i++)
	{
		cout << a[i] << "," << a[n -1- i] << ",";
	}
}