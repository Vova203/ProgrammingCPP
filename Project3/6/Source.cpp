#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x = 0;
		cin >> x;
		if (x == 0)
		{
			a += 1;
		}
		if (x > 0)
		{
			b += 1;
		}
		if (x < 0)
		{
			c += 1;
		}
	}
	cout << a << " " << b << " " << c << endl;
	return EXIT_SUCCESS;
}