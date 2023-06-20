#include <iostream>
#include <vector>
using namespace std;

void _10807()
{
	int N = 0, v = 0;
	int num[100] = {};
	int countP[101] = {0};
	int countM[101] = {0};
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num[i];

		if (num[i] >= 0)
			countP[num[i]]++;
		else
		{
			num[i] = -1 * (num[i]);
			countM[num[i]]++;
		}
	}
	cin >> v;
	if (v >= 0)
		cout << countP[v];
	else
	{
		v = -1 * v;
		cout << countM[v];
	}
}
void _10807_2()
{
	vector<int> a;
	int n;
	cin >> n;

	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}

	int m;
	cin >> m;
	int cnt = 0;
	for (auto it : a) {
		if (it == m) {
			cnt++;
		}
	}

	cout << cnt;
}

void _10871()
{
	vector<int> A;
	int N = 0 , X =0;

	cin >> N >> X;

	int num;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		A.push_back(num);
	}
	for (auto it : A)
	{
		if (it < X)
			cout << it << " ";
	}
}

void _10818()
{
	int N;
	int input = 0, max = -1000000, min = 1000000;
	vector<int> A;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		A.push_back(input);
	}
	min = A.front();
	for (auto it : A)
	{
		if (it < min)
			min = it;
		if (it > max)
			max = it;
	}
	cout << min << " " << max;
}

void _2562()
{
	int index = 0;
	int a[9] = {};

	int input = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		a[i] = input;
	}
	int max = 0;

	for (int i = 0; i < 9; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			index = i+1;
		}
	}
	cout << max << "\n" << index;
}

void _10810()
{
	int M = 0, N = 0;
	cin >>  M >> N;

	int bascket[101] = { 0 };

	for (int i = 0; i < M; i++)
	{
		int start, end, num;
		cin >> start >> end >> num;
		for (int j = start - 1; j <= end - 1; j++)
		{
			bascket[j] = num;
		}
	}
	for (int i = 0; i < M; i++)
	{
		cout << bascket[i] << " ";
	}
}

void _10813()
{
	int N = 0, M = 0;
	cin >> N >> M;
	int bascket[101] = { 0 };
	for (int i = 0; i < N; i++)
	{
		bascket[i] = i + 1;
	}

	int first, second;
	for (int i = 0; i < M; i++)
	{
		cin >> first >> second;
		int temp = bascket[first - 1];
		bascket[first - 1] = bascket[second - 1];
		bascket[second - 1] = temp;
	}

	for (int i = 0; i < N; i++)
	{
		cout << bascket[i] << " ";
	}
}

void _5597()
{
	int num;
	int a[30] = { 0 };
	
	for (int i = 0; i < 28; i++)
	{
		cin >> num;
		a[num - 1] = num;
	}

	for (int i = 0; i < 30; i++)
	{
		if (a[i] == 0)
			cout << i+1 << "\n";
	}
}

void _3052()
{
	int a[10] = { 0 };
	int b[42] = { 0 };
	int input = 0 , count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		a[i] = input % 42;
		b[input % 42] = 1;
	}

	for (int i = 0; i < 42; i++)
	{
		if (b[i] != 0)
			count++;
	}
	cout << count;
}

void _10811()
{
	int N = 0, M = 0;
	int a[101] = { 0 };
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		a[i] = i+1;
	}

	int start = 0, end = 0;
	for (int i = 0; i < M; i++)
	{
		cin >> start >> end;
		for (int j = 0; j <= (end - start) / 2; j++)
		{
			int temp = a[(start-1) + j];
			a[(start-1) + j] = a[(end-1) - j];
			a[(end-1) - j] = temp;
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << a[i] << " ";
	}
}

void _1546()
{
	int N = 0;
	int score[1000];
	int max = 0;
	double sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> score[i];
		if (max < score[i])
			max = score[i];
		sum += score[i];
	}
	sum = (sum / max * 100) / N;

	cout << fixed;
	cout.precision(6);
	cout << sum;


	cout << sum;
}

int main()
{

	_1546();
	return 0;
}