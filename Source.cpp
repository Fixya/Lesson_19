#include <iostream>
#include <ctime>
double fu2(double x) {
	return x * x;
}
double fu3(double x) {
	return x * x * x;
}
double fu4(double x) {
	return x * x * x * x;
}
double amean(double x, double y) {
	return (x + y) / 2.0;
}
double gmean(double x, double y) {
	return sqrt(x * y);
}
double triP(double x) {
	return 3 * x;
}
double triS(double x) {
	return x * x * sqrt(3 / 4.0);
}
double kord(double x1, double x2) {
	return abs(x2 - x1);
}
double praP(double x, double y) {
	return x * 2 + y * 2;
}
double praS(double x) {
	return x * x * sqrt(3) / 4.0;
}
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	//01
	/*srand(time(nullptr));
	for (int i=1; i <= 5; i++)
	{
		double a = rand() % 11;
		double a3 = fu(a);
		cout << a << ' ' << a3 << endl;
	}*/
	
	//02
	/*srand(time(0));
	for (int i = 1; i <= 5; i++)
	{
		double a = rand() % 11;
		double a2 = fu2(a);
		double a4 = fu4(a);
		cout << a << ' ' << a2 << ' ' << a4 << endl;
	}*/

	//3
	/*srand(time(0));
	for (int i = 1; i <= 10; i++)
	{
		double a = rand() % 101 * 0.1;
		double b = rand() % 101 * 0.1;
		double a1 = amean(a,b);
		double b1 = gmean(a,b);
		cout << a << ' ' << b << ' ' << a1 << ' ' << b1 << endl;
	}*/
	//4
	/*srand(time(0));
	for (int i = 1; i <= 3;i++)
	{
		double a = rand() % 101 * 0.1;
		double P = triP(a);
		double S = triS(a);
		cout << a << ' ' << P << ' ' << S << endl;
	}*/

	/*Proc5. Описать процедуру RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр Pи 
	площадь S прямоугольника со сторонами, параллельными осям координат, по координатам
	(x1, y1), (x2, y2) его противоположных вершин(x1, y1, x2, y2 — входные, P и S — 
	выходные параметры вещественного типа). С помощью этой процедуры найти периметры и 
	площади трех прямоугольников с данными противоположными вершинами.*/
	/*srand(time(0));
	for (int i = 1; i <= 3; i++)
	{
		double x1 = rand() % 11 * 0.1;
		double y1 = rand() % 11 * 0.1;
		double x2 = rand() % 11 * 0.1;
		double y2 = rand() % 11 * 0.1;
		double wid = kord(x1,x2);
		double lon = kord(y1, y2);
		double P = praP(wid, lon);
		double S = praS(lon);
		cout << wid << ' ' << lon << ' ' << P << ' ' << S << endl;
	}*/
}