#include <iostream>
#include <stdexcept>

using namespace std;

class BaseBall {
public:
	void guess(const string& str) {
		if (str.length() != 3) {
			throw length_error("3자리 숫자여야 합니다.");
		}
	}
};