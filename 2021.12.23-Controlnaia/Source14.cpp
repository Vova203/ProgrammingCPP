#include<iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int H = 0;
	int R = 0;
	int M = 0;
	int Go = 122404;
	int t = 0;
	cin >> H >> R >> M;
	t = R * sqrt(2*H/M)*Go;
	cout << t << endl;

	return EXIT_SUCCESS;
}