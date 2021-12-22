#include <iostream>

#include <stdlib.h>;

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	int min = 0;
	cin >> a >> b;
	max = (a + b + abs(a - b)) / 2;
	min = (a + b - abs(a - b)) / 2;
	cout << max << max << endl;

	return EXIT_SUCCESS;
}