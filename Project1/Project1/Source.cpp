#include <iostream>
using namespace std;

int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(float c, float d);



int tong(int a, int b)
{
	int s = a + b;
	cout << "\n Tong la:";
	return s;

}
int hieu(int a, int b)
{
	cout << "\n Hieu la:";
	return a - b;
}

int tich(int a, int b)
{

	cout << "\n Tich la:";
	return a * b;
}

float thuong(float c, float d)
{
	cout << "\n Thuong la:";
	return c / d;
}



void main()
{
	int a, b;
	float c, d;
	cout << "\nNhap a, b: ";
	cin >> a >> b;
	cout << "\nNhap c, d : ";
	cin >> c >> d;
	cout << tong(a, b);
	cout << hieu(a, b);
	cout << tich(a, b);
	cout << thuong(a, b);
	system("pause");
}