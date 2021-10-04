#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    cin >> a >> b >> c >> d;
    if ((a == c) || (b == d) || (c - a == b - d) || (a - c == d - b) || (c - a == d - b) || (a - c == b - d))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return EXIT_SUCCESS;
}