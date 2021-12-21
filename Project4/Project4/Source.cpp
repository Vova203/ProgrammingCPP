#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	//1
	int a[100]{ 0 };
	int n = 0;
	cin >> n;
	
	//2
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	//3
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	//4
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

	//5
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	cout << sum << endl;
	return EXIT_SUCCESS;

	//6
	int p = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			p *= a[i]
		}
	}
	cout << p << endl;

	//7
	int io = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[io])
		{
			io = i;
		}
	}
	cout << io << endl;

	//8



	//10
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			cout << a[i] << "";
		}
	}
	cout << endl;
}