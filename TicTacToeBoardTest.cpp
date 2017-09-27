/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"

class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

/** EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, toggleTurnTEST)
{
	TicTacToeBoard TTT;
	bool check = 0;
	char turn;
	if (TTT.toggleTurn() == X)
	{
		turn = TTT.toggleTurn();
		if (turn == X)
			check = 1;
	}
	if (turn == X)
		if (TTT.toggleTurn() == O)
		{
			turn = TTT.toggleTurn();
			if (turn == O)
				check = 1;
		}
	ASSERT_TRUE(check);
}

TEST(TicTacToeBoardTest, placePieceTest)
{
  TicTacToeBoard TTT;
  bool check = 0;
  for(int row = 0; row < 3; row++)
	{
    for(int column = 0; column < 3; column++)
    {
      if(TTT.placePiece(row,column)== 'X' || TTT.placePiece(row,column)=='O' || TTT.placePiece(row,column)==' ')
          check=1;
    }
  }
  ASSERT_TRUE(check);
}

TEST(TicTacToeBoardTest, checkWinner)
{
  TicTacToeBoard TTT;
  bool check = 0;
  if(TTT.getWinner() == X || TTT.getWinner() == O)
    check=1;

  ASSERT_TRUE(check);
}
