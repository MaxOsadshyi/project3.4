// Lab_03_4.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 18
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((y <= x && y >= -(x - R) * (x - R) / (y - 2 * R))||
		(y <= -(x + R) * (x + R) / y + 2 * R && y >= x))
		
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
