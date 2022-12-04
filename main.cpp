#include <iostream>
using namespace std;

int main()
{
	float num, sq;
	int pow;
	cin >> num;
	sq = num;
	cin >> pow;
	for (int i = 1; i < pow; i++)
		sq = sq * num;
	cout << endl << sq;
}


