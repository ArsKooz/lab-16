#include <iostream>

using namespace std;

int main()
{
	int n, i, a, d;
	cout << "Vvedite N A D\n";
	cin >> n >> a >> d;
	int* mas = new int[n];
	mas[0] = a;
	cout << mas[0]<<" ";
	for (i = 1;i < n;i++)
	{
		mas[i] = mas[i - 1] * d;
		cout << mas[i] << " ";
	}
}