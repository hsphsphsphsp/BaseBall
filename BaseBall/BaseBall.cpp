#include <iostream>
#include <stdexcept>

using namespace std;

class BaseBall {
public:
	void guess(const string& guessNum) {
		if (guessNum.length() != 3) {
			throw length_error("3자리 숫자여야 합니다.");
		}

		for (char ch : guessNum) {
			if (ch < '0' || ch > '9') {
				throw invalid_argument("숫자여야 합니다.");
			}
		}
	}
};