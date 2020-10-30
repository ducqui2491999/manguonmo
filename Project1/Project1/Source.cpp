#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

void randomTong();
int randomHieu2so();
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(float c, float d);


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
	randomTong();
	cout << "\nHieu 2 so la:" << randomHieu2so();
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


void randomTong()
{
	srand(time(0));
	int r0 = rand() % 100;
	int r1 = rand() % 100;

	cout << "\n Số Random 1:" << r0;
	cout << "\n Số Random 2:" << r1;
	cout << "\n Tong Random:" << r0 + r1;

}
  




int randomHieu2so()
{
	srand(time(0));
	int a = rand() % 100;
	int b = rand() % 100;
	cout << "\nSo a Random:"<<a;
	cout << "\nSo b Random:"<<b;
	return a - b;
}
