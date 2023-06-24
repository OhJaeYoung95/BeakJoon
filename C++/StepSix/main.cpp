#include <iostream>
#include <algorithm>

using namespace std;

void _25083()
{
	cout << "         ,r'\"7" << "\n";
	cout << "r`-_   ,'  ,/" << "\n";
	cout << " \\. \". L_r'" << "\n";
	cout << "   `~\\/" << "\n";
	cout << "      |" << "\n";
	cout << "      |" << "\n";
}

void _3003()
{
	int origin[6] = {1, 1, 2, 2, 2, 8};
	int current[6] = {0};
	int len = sizeof(current) / sizeof(int);

	for (int i = 0; i < len; i++)
	{
		cin >> current[i];
		cout << origin[i] - current[i] << " ";
	}
}

void _2444()
{
	int line;
	cin >> line;

	for (int i = 0; i < line; i++)
	{
		for (int j = line; j >= 0; j++)
		{
			line++;
		}
	}
}

int main()
{
	_2444();
	return 0;
}