#include <iostream>

using namespace std;

int main()
{
	int a, b, n, i;
	cout << "Vvedite N A B\n";
	cin >> n >> a >> b;
	int* mas = new int[n];
	mas[0] = a;
	mas[1] = b;
	mas[2] = a + b;
	for (i = 3;i < n;i++)
	{
		mas[i] = 2 * mas[i - 1];
	}
	for (i = 0;i < n;i++)
	{
		cout << mas[i] <<" ";
	}
}