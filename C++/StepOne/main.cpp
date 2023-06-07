#include <iostream>
using namespace std;

void _2557()
{
	cout << "Hello World!" << endl;
}
void _1000()
{
	int A = 0, B = 0;
	cin >> A >> B;
	cout << A + B;
}

void _1001()
{
	int A = 0, B = 0;
	cin >> A >> B;
	cout << A - B;
}

void _10998()
{
	int A = 0, B = 0;
	cin >> A >> B;
	cout << A * B;
}

void _1008()
{
	double a, b;
	cin >> a >> b;

	cout.precision(12);
	cout << fixed;
	cout << a / b;
}

void _10869()
{
	int A = 0, B = 0;
	cin >> A >> B;
	cout << A + B << endl;
	cout << A - B << endl;
	cout << A * B << endl;
	cout << A / B << endl;
	cout << A % B << endl;
}

void _10926()
{
	char str[51];
	cin >> str;
	cout << str << "??!";
}

void _18108()
{
	int y = 0;
	cin >> y;
	cout << y - (2541-1998);
}

void _10430()
{
	int A = 0, B = 0, C = 0;
	cin >> A >> B >> C ;
	cout << (A + B) % C << "\n";
	cout << ((A % C) + (B % C)) % C << "\n";
	cout << (A*B) % C << "\n";
	cout << ((A % C) *(B % C)) % C << "\n";
}

void _2588()
{
	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;
	cout << num1 * ((num2 % 100)%10) << "\n";
	cout << num1 * ((num2 % 100)/ 10) << "\n";
	cout << num1 * (num2 / 100) << "\n";
	cout << num1 * num2 << "\n";
}

void _11382()
{
	long num1 = 0, num2 = 0, num3 = 0;
	cin >> num1 >> num2 >> num3;
	cout << (long)num1 + num2 + num3;
}

void _10171()
{
	cout << "\\    /\\" << "\n";
	cout << " )  ( ')" << "\n";
	cout << "(  /  )" << "\n";
	cout << " \\(__)|" << "\n";
}

void _10172()
{
	cout << "|\\_/|" << "\n";
	cout << "|q p|   /}" << "\n";
	cout << "( 0 )\"\"\"\\" << "\n";
	cout << "|\"^\"`    |" << "\n";
	cout << "||_/=\\\\__|" << "\n";
}

int main()
{
	_10172();
	return 0;
}