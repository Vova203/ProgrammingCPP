#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int s = 0;
	cin >>  n;
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	s = a + b + c;
	cout << s << endl;
	return EXIT_SUCCESS;
}