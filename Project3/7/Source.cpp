#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	for (int i = 0; i <= 1000; i++)
	{
		int x = i;
		if (a*x*x*x + b*x*x + c*x + d == 0)
		{
			cout << x << endl;
		}
	}
	return EXIT_SUCCESS;
}