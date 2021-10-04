#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 0;
	int x1 = 0;
	int s = 0;
	cin >> x;
	x1 = x * x;
	s = x1 * (x1 + x + 1) + x + 1;
	cout << s << endl;
	return EXIT_SUCCESS;
}