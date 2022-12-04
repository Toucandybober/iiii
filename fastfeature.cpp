#include <iostream>
using namespace std;

long powerFast(long num, long deg)
{
    long result = 1;
    while (deg) {
        if (deg % 2 == 0) {
            deg /= 2;
            num *= num;
        }
        else {
            deg--;
            result *= num;
        }
    }

    return result;
}

int main()
{
    int deg;
    float num;
    cin >> num;
    cin >> deg;
    cout << powerFast(num, deg);   
}

