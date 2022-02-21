#include <iostream>
#include <string>

using  namespace std;

int main() {
	// переменные
	int num, num2;
	string q;
	cout << "it some calculate :) enter with a space\n";
	cin >> num;
	cin >> q;
	cin >> num2;
	// посчёты
	if (q == "+") {
		int c = num + num2;
		cout << "result = " + to_string(c);
	}
	if (q == "-") {
		int c = num - num2;
		cout << "result = " + to_string(c);
	}
	if (q == "*") {
		int c = num * num2;
		cout << "result = " + to_string(c);
	}
	if (q == "/") {
		int c = num / num2;
		cout << "result = " + to_string(c);
	}
}