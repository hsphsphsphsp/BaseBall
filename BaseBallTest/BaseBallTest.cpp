#include "pch.h"
#include "../BaseBall/BaseBall.cpp"

TEST(BaseBallGameTest, ZeroScore) {
	BaseBall game;

	EXPECT_THROW(game.guess(string("12")), length_error);
}
