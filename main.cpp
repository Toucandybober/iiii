#include <iostream>
using namespace std;

int main()
{
	float num, sq;
	int pow;
	cin >> num;
	sq = num;
	cin >> pow;
	for (int i = 1; i < abs(pow); i++)
		sq = sq * num;
	if (pow < 0)
		sq = 1 / sq;
	cout << endl << sq;
}


