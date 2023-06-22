#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void _27866()
{
	char string[1000];
	int i;
	cin >> string;
	cin >> i;

	cout << string[i - 1];
}

void _27866_2()
{
	string S;
	int pos = 0;
	cin >> S;
	cin >> pos;

	cout << S[pos - 1];
}
void _27866_3()
{
	//char S[1000];
	//int i;

	//scanf("%s", S);
	//scanf("%d", &i);

	//printf("%c", S[i - 1]);
}

void _2743()
{
	char s[101];
	//string s;
	int len = 0;
	cin >> s;
	while (s[len] != NULL)
		len++;
	cout << len << "\n";
	//cout << s.length();
	//cout << strlen(s);
}

void _9086()
{
	string s;
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> s;
		cout << s[0] << s[s.length() - 1] << "\n";
	}
}

void _11654()
{
	char c;
	cin >> c;
	cout << (int)c;
}

void _11720()
{
	string s;
	int n;
	cin >> n;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += ((int)s[i] - (int)'0');
	}
	cout << sum;
}

void _10809()
{
	char str[101];
	cin >> str;
	for (int i = 97; i <= 122; i++)
	{
		int cnt = 0;
		while (str[cnt] != NULL)
		{
			if (str[cnt] == i)
				break;
			cnt++;
		}
		if (str[cnt] != i)
			cout << -1 << " ";
		else
			cout << cnt << " ";
	}


	//cout << (char)('a'+2);	// 97 a의 int형 // 122 a의 int형 차는 25
	//cout << (int)'z' -(int)'a';	// 97 a의 int형 // 122 a의 int형 차는 25

}

void _10809_2()
{
	string s;

	cin >> s;

	string alphabet = "abcdefghijklmnopqrstuvwxyz";


	for (int i = 0; i < alphabet.length(); i++)
	{
		cout << (int)s.find(alphabet[i]); //s에서 알파벳이 있으면 해당 알파벳의 위치 출력
		cout << " ";
	}
}

void _2675()
{
	string s;
	int r, t;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> r;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < r; k++)
			{
				cout << s.at(j);
				// s[j];
			}
		}
		cout << "\n";
	}
}

void _1152()
{
	string s;
	int i = 0;
	getline(cin, s);

	if (s.empty())
	{
		cout << "0";
	}
	int cnt = 1;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
			cnt++;
	}
	if (s[0] == ' ')
		cnt--;
	if (s[s.length() - 1] == ' ')
		cnt--;
	cout << cnt;
}

void _2908()
{
	string num1;
	string num2;

	cin >> num1 >> num2;
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());

	int first = stoi(num1);
	int second = stoi(num2);

	if (num1 > num2)
		cout << num1;
	else
		cout << num2;
}

void _5622()
{
	string s;
	cin >> s;
	int second = 0;
	for (int i = 0; i < s.length(); i++)
	{
		second += 2;
		switch (s[i])
		{
		case 'A':
		case 'B':
		case 'C':
			second += 1;
			break;
		case'D':
		case'E':
		case'F':
			second += 2;
			break;
		case'G':
		case'H':
		case'I':
			second += 3;
			break;
		case'J':
		case'K':
		case'L':
			second += 4;
			break;
		case'M':
		case'N':
		case'O':
			second += 5;
			break;
		case'P':
		case'Q':
		case'R':
		case'S':
			second += 6;
			break;
		case'T':
		case'U':
		case'V':
			second += 7;
			break;
		case'W':
		case'X':
		case'Y':
		case'Z':
			second += 8;
			break;
		}
	}
	cout << second;
}

void _11718()
{
	string s;
	while (true)
	{
		getline(cin, s);
		if (s == "\0")
			break;
		cout << s << endl;
	}
}

int main()
{
	_11718();
	return 0;
}