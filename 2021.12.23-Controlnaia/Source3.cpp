#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	cout << a * b / f(a, b);
	return EXIT_SUCCESS;
}


int f(int a, int b)
{
	if (a * b == 0)
	{
		return a + b;
	}
	if (a < b)
	{
		return f(a, b % a);
	}
	else 
	{
		return f(a % b, b);
	}
}