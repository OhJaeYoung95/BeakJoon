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

}

int main()
{
	_10818();
	return 0;
}