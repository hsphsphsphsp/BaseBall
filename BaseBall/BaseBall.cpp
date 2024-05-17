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

		if (guessNum[0] == guessNum[1] || guessNum[1] == guessNum[2] || guessNum[0] == guessNum[2])
			throw invalid_argument("숫자가 중복되면 안됩니다.");
	}
};