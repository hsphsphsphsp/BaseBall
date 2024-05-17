#include "pch.h"
#include "../BaseBall/BaseBall.cpp"

class BaseBallFixture : public testing::Test {
public:
	BaseBall game;
	void assertIllegalArgument(string guessNumber) {
		try {
			game.guess(guessNumber);
			FAIL();
		}
		catch (exception e) {

		}
	}
};

TEST_F(BaseBallFixture, InvalidCase) {
	assertIllegalArgument("12");
	assertIllegalArgument("12s");
	assertIllegalArgument("121");
}
