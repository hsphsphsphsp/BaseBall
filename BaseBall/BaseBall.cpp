#include <iostream>
#include <stdexcept>

using namespace std;

struct GuessResult
{
	bool solved;
	int strikes;
	int balls;
};

class BaseBall {
private:
	string question;

public:
	explicit BaseBall(const string &question) : question(question)
	{}

	GuessResult guess(const string& guessNum) {
		assertIllegalArgument(guessNum);
		return { true, 3, 0 };
	}

	void assertIllegalArgument(const std::string& guessNum)
	{
		if (guessNum.length() != 3) {
			throw length_error("3자리 숫자여야 합니다.");
		}

		for (char ch : guessNum) {
			if (ch >= '0' && ch <= '9') continue;
			throw invalid_argument("숫자여야 합니다.");
		}

		if (isThereDuplicatedNumber(guessNum))
			throw invalid_argument("숫자가 중복되면 안됩니다.");
	}

	bool isThereDuplicatedNumber(const std::string& guessNum)
	{
		return guessNum[0] == guessNum[1] || guessNum[1] == guessNum[2] || guessNum[0] == guessNum[2];
	}
};