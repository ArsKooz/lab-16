#include <iostream>

using namespace std;

int main()
	{
	int i, n, k;
	cout << "Vvedite N\n";
	cin >> n;
	int *mas = new int[n];
	k = 1;
	for (i = 0;i < n;i++)
	{
		mas[i] = k;
		cout << mas[i] << "  ";
		k += 2;
	}
	}
