#include "pch.h"
#include "../BaseBall/BaseBall.cpp"

TEST(BaseBallGameTest, lengthError) {
	BaseBall game;

	EXPECT_THROW(game.guess(string("12")), length_error);
}

TEST(BaseBallGameTest, invalidChar) {
	BaseBall game;

	try {
		game.guess("12s");
		FAIL();
	}
	catch (exception e) {

	}
	
}
