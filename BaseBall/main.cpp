#include <stdexcept>
#include <iostream>

using namespace std;

void go(int a, int b)
{
	if (a < 0 || b < 0)
		throw invalid_argument("음수가 있습니다");

	if (a > 10 || b > 10)
		throw out_of_range("10을 넘습니다");

}

int main() {
	try {
		go(50, 10);
		go(-3, 51);
	}
	catch (invalid_argument& e) {
		cout << e.what() << endl;
	}
	catch (out_of_range& e) {
		try {
			go(-3, 11);
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
		cout << e.what() << endl;
	}

	return 0;
}