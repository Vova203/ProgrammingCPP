#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int sum = 0;
	for (int i = 0; i < 10; ++i)
	{
		cin >> a;
		sum += a;
	}
	cout << sum <<endl;
	return EXIT_SUCCESS;
}