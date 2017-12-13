#include <iostream>
using namespace std;
void Sum(double a, double b) {
	cout << "Summation a + b: "<< a+b;
}
void Sub(double a, double b) {
	cout << "\r\nSubstraction a - b: "<< a-b;
	cout << "\r\nSubstraction b - a: "<< b-a;
}
void Div(double a, double b) {
	cout << "\r\nDivision a/b: "<< a/b;
	cout << "\r\nDivision b/a: "<< b/a;
}
void Mult(double a, double b) {
	cout << "\r\nMultiplication a*b: " << a*b<<endl;
}
double a, b;
int main() {
	cout << "Print a, please: \r\n";
	cin >> a;
	cout << "Print b, please: \r\n";
	cin >> b;
	Sum(a, b);
	Sub(a, b);
	Div(a, b);
	Mult(a, b);
	system("pause");
	return 0;
}