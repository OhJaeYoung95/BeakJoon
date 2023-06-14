#include <iostream>
using namespace std;

void _2739()
{
	int N = 0;
	cin >> N;
	for (int i = 1; i < 10; i++)
		cout << N << " * " << i << " = " << N * i << "\n";
}

void _10950()
{
	int A = 0, B = 0 , T = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << A + B << "\n";
	}	
}

void _8393()
{
	int n = 0, sum =0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	cout << sum;
}

void _25304()
{
	int X = 0, N = 0, a = 0 , b =0;
	cin >> X;
	cin >> N;
	int cal = 0, total = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		cal = a * b;
		total += cal;
	}
	if (X == total)
		cout << "Yes";
	else
		cout << "No";
}

void _25314()
{
	int N = 0;
	cin >> N;
	for (int i = 0; i < N/4; i++)
	{
		cout << "long ";
	}
	cout << "int";
}

void _15552()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T = 0, A = 0, B = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << A + B << "\n";
	}
}

void _11021()
{
	int A = 0, B = 0, T = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i+1 << ": " << A + B << "\n";
	}
}

void _11022()
{
	int A = 0, B = 0, T = 0;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << "\n";
	}
}

void _2438()
{
	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

void _2439()
{
	int N = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = i+1; j < N; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}

void _10952()
{
	int A = 0, B = 0;
	while(true)
	{
		cin >> A >> B;
		if (A == B && A == 0)
			break;
		cout << A + B << "\n";
	}
}

void _10951()
{
	int a, b;
	while (cin >> a >> b) 
	{
		cout << a + b << endl;
	}
}

int main()
{
	_10951();
	return 0;
}