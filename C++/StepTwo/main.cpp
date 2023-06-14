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
	if (M < 45)
	{
		M += 15;
		H--;
	}
	else
		M -= 45;
	if (H < 0)
		H = 23;
	cout << H << " " << M;
}

void _2525()
{
	int H = 0, M = 0, countTime = 0;
	cin >> H >> M;
	cin >> countTime;
	int calH = countTime / 60;
	int calM = countTime % 60;

	if (M + calM >= 60)
	{
		if (H + 1 + calH > 23)
		{
			H = (H + 1 + calH) % 24;
		}
		else
		{
			H = H + 1 + calH;
		}
		M = M + calM - 60;
	}
	else
	{
		if (H + calH > 23)
		{
			H = (H + calH) % 24;
		}
		else
		{
			H += calH;
		}
		M += calM;
	}
	cout << H << " " << M;
}

void _2480()
{
	int dice1 = 0, dice2 = 0, dice3 = 0, prize = 0;

	cin >> dice1 >> dice2 >> dice3;

	if (dice1 == dice2 && dice2 == dice3)
		prize = 10000 + dice1 * 1000;
	else if (dice1 == dice2 || dice2 == dice3 || dice1 == dice3)
	{
		if (dice1 == dice2)
			prize = 1000 + dice1 * 100;
		else if (dice2 == dice3)
			prize = 1000 + dice2 * 100;
		else if (dice1 == dice3)
			prize = 1000 + dice1 * 100;
	}
	else
	{
		prize = 100 * (dice1 > dice2 ? (dice1 > dice3 ? dice1 : dice3) : dice2 > dice3 ? dice2 : dice3);
	}

	cout << prize;
}


int main()
{
	_2480();
	return 0;
}