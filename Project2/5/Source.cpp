#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int k = 0;
    cin >> k;
    if (k % 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return EXIT_SUCCESS;
}