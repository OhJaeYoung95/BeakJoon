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
		for (int j = 1; j < line-i; j++)
		{
			cout << " ";
		}
		for (int j = line; j >= line - i; j--)
		{
			cout << "*";
		}
		for (int j = line; j > line - i; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}	
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j < line-i; j++)
		{
			cout << "*";
		}
		for (int j = 2; j < line - i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
void _2444_2()
{
	int line;
	cin >> line;
	for (int i = 1; i <= line; i++)
	{
		for (int j = 0; j < line-i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*i - 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}	
	for (int i = 1; i < line; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*line - (2*i+1); j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
void _10988()
{
	string s;
	cin >> s;
	int palindrome = 1;
	for (int i = 0; i < s.length()/2; i++)
	{
		if (s[i] != s[s.length() - 1 - i])
			palindrome = 0;
	}

	cout << palindrome;
}
void _1157()
{	// ���ĺ� 26��
	string s;
	int count[26] = { 0 };
	int countLen = sizeof(count) / sizeof(int);
	int index = 0;
	int max = 0;
	int cnt = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 'a';
			count[(int)s[i]]++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] -= 'A';
			count[(int)s[i]]++;
		}
	}

	for (int i = 0; i < countLen; i++)
	{
		if (count[i] == 0)
			continue;
		if (max < count[i])
		{
			max = count[i];
			index = i;
		}
	}

	for (int i = 0; i < countLen; i++)
	{
		if (max == count[i])
			cnt++;
	}

	if (cnt > 1)
		cout << '?';
	else
		cout << (char)(index + 'A') << "\n";
}
void _2941()
{
	// c=, c- , dz=, d-, lj, nj, s=, z=
	string s;
	int count = 0;
	cin >>  s;

	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] == '=' && s[i - 1] == 'c') ||
			(s[i] == '-' && s[i - 1] == 'c') ||
			(s[i] == '-' && s[i - 1] == 'd') ||
			(s[i] == 'j' && s[i - 1] == 'l') ||
			(s[i] == 'j' && s[i - 1] == 'n') ||
			(s[i] == '=' && s[i - 1] == 's'))
		{
			count--;
		}
		else if (s[i] == '=' && s[i - 1] == 'z' && s[i - 2] == 'd')
			count -= 2;
		else if ((s[i] == '=' && s[i - 1] == 'z'))
			count -= 1;
		count++;
	}

	cout << count;
}
void _1316()
{
	string s;
	int n;
	int count[26] = { 0 };
	int len = sizeof(count) / sizeof(int);
	int sCheck = 0;
	int groupWord = 0;

	if (s.length() == 1)
		count[(int)s[0]]++;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i + 1] == s.length())
				break;
			if (s[i] != s[i + 1])
			{
				int index = (int)s[i] - 'a';
				count[index]++;
			}
		}
		for (int i = 0; i < len; i++)
		{
			if (count[i] == 0)
				continue;
			if (count[i] > 1)
			{
				sCheck = 1;
				break;
			}
		}

		if (sCheck == 0)
		{
			groupWord++;
		}
		sCheck = 0;
		for (int i = 0; i < len; i++)
		{
			count[i] = 0;
		}
	}
	cout << groupWord;
}
void _25206()
{
	string s;

	for (int i = 0; i < 20; i++)
	{
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			while (s[i] != ' ')
			{

			}
		}
	}
}
int main()
{
	_25206();
	return 0;
}