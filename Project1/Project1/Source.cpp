#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;


int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(float c, float d);
int chuvihinhvuong(int a);
int chuvihinhchunhat(int a, int b);
int chuvihinhtron(int a);
int dientichhinhvuong(int a);
int dientichhinhcn(int a, int b);
int dientichhinhtron(int a);


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
	cout << chuvihinhvuong(a);
	cout << chuvihinhchunhat(a, b);
	cout << chuvihinhtron(a);
	cout << dientichhinhvuong(a);
	cout << dientichhinhcn(a, b);
	cout << dientichhinhtron(a);
	system("pause");
	return 0;
	
	system("pause");
}

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
int chuvihinhvuong(int a)
{

	cout << "\n chu vi hinh vuong la:";
	return a * 4;
}
int chuvihinhchunhat(int a, int b)
{

	cout << "\n chu vi hinh chu nhat:";
	return  (a + b) * 2;
}
int chuvihinhtron(int a)
{

	cout << "\n chu vi hinh tron:";
	return  2 * a*3.14;
}
int dientichhinhvuong(int a)
{

	cout << "\n dien tich hinh vuong:";
	return a * a;
}
int dientichhinhcn(int a, int b)
{
	cout << "\ndien tich hinh chu nhat:";
	return a * b;
}
int dientichhinhtron(int a)
{
	cout << "\n dien tich hinhn tron: ";
	return a * a*3.14;
}

