#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a[20] = {0};
	for (int i = 0; i < 20; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 20; ++i)
	{
		cout << a[19 - i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}