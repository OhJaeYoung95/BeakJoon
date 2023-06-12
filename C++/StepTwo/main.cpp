#include <iostream>
using namespace std;

void _1330()
{
	int A = 0, B = 0;
	cin >> A >> B;
	if (A > B)
		cout << ">";
	else if (A < B)
		cout << "<";
	else if (A == B)
		cout << "==";
}

void _9498()
{
	int score = 0;
	cin >> score;

	if (score <= 100 && score >= 90)
		cout << "A";
	else if (score <= 89 && score >= 80)
		cout << "B";
	else if (score <= 79 && score >= 70)
		cout << "C";
	else if (score <= 69 && score >= 60)
		cout << "D";
	else
		cout << "F";
}

void _2753()
{
	int year;
	cin >> year;

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		cout << 1;
	}
	else
		cout << 0;
}

void _14681()
{
	int x = 0, y = 0;
	cin >> x >> y;
	if (x > 0 && y > 0)
		cout << 1;
	else if (x < 0 && y > 0)
		cout << 2;
	else if (x < 0 && y < 0)
		cout << 3;
	else if (x > 0 && y < 0)
		cout << 4;
}

void _2884()
{
	int H = 0, M = 0;
	cin >> H >> M;


}

int main()
{
	_2884();
	return 0;
}