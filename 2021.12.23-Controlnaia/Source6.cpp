#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int t = a * 45 + (a / 2) * 5 + ((a + 1) / 2 - 1) * 15;
	cout << t << endl;
	return EXIT_SUCCESS;
}