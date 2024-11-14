#pragma once

#include "Game.h"
#include <iostream>

class TicTacToe : public Game
{
private:
	/*
	0 1 2
	3 4 5
	6 7 8
	*/
	char m_board[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	int m_turnCount = 0;
	bool m_player = true;

public:
	TicTacToe() { }

	virtual bool IsGameOver() const;

	virtual void TakeTurn();

	virtual void Display() const;

};