#include <iostream>
#include <string>

using  namespace std;

int main() {
	// ����������
	int num, num2;
	string q;
	cout << "it some calculate :) enter with a space\n";
	cin >> num;
	cin >> q;
	cin >> num2;
	// �������
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