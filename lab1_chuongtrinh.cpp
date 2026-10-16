#include "lab1_thuvienh.h"

void main() {
	int a, b;
	double x;
	cout << "\nGiai phuong trinh bac 1(ax+b= 0):";
	cout << "\nNhap a=";
	cin >> a;
	cout << "\nNhap b = ";
	cin >> b;
	if(giaiptb1(a, b, x))
	cout << "\n\nNghiem cua phuong trinh la:" << x;
	int n;
	cout << "\nTinh 2 mu n:";
	cout << "\nNhap n=";
	cin >> n;
	cout << "\n2 mu " << n << " = " << tinh2mun(n);
	cout << "\n2 mu " << n << " = " << tinh2mu2(n);
	if (luythua(n));
	system("pause");
}

