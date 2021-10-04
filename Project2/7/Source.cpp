#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    int k = 0;
    cin >> n >> m >> k;
    if ((k < m * n) && ((k % m == 0) || (k % n == 0)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return EXIT_SUCCESS;
}