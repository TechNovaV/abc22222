#include "lab1_thuvienh.h"

bool giaiptb1(int a, int b, double& x) {
	if (a == 0) {
		return false;
	}
	else {
		x = -b * 1.0 / a;
		return true;
	}


}

double tinh2mun(int n) {
	double s = 1;
	int i = 1;
	while (i <= n) {
		s *= 2;
		i++;
	}
	return n< 0 ? 1.0/s:s;
}

double tinh2mu2(int n) {
	double s = 1;
	int y = 1;
	int jqk;
	cout << "nhap jqk ";
	while (y <= n) {
		s = pow(jqk, y);
		y++;
	}
	return s;
}
bool luythua(int n) {
	if (n < 1) return false;
	while (n % 2 == 0) {
		n /= 2;
	}return n == 1;
}

int ucln(int n) {
	int max;
	for (int i = 0; i <= n; i++)
	{
		if (max > i) {
			if (n%i==0)
			{

			}
		}
	}
}