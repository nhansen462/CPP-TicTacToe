#include "TicTacToe.h"

bool TicTacToe::IsGameOver() const {
	if (m_board[0] == m_board[1] && m_board[1] == m_board[2] && m_board[1] != ' ') {
		std::cout << "Player " << (!m_player ? "X" : "O") << " Wins!\n";
		return true;
	}

	if (m_board[3] == m_board[4] && m_board[4] == m_board[5] && m_board[4] != ' ') {
		std::cout << "Player " << (!m_player ? "X" : "O") << " Wins!\n";
		return true;
	}

	if (m_board[6] == m_board[7] && m_board[7] == m_board[8] && m_board[7] != ' ') {
		std::cout << "Player " << (!m_player ? "X" : "O") << " Wins!\n";
		return true;
	}

	if (m_board[0] == m_board[3] && m_board[3] == m_board[6] && m_board[3] != ' ') {
		std::cout << "Player " << (!m_player ? "X" : "O") << " Wins!\n";
		return true;
	}

	if (m_board[1] == m_board[4] && m_board[4] == m_board[7] && m_board[4] != ' ') {
		std::cout << "Player " << (!m_player ? "X" : "O") << " Wins!\n";
		return true;
	}

	if (m_board[2] == m_board[5] && m_board[5] == m_board[8] && m_board[5] != ' ') {
		std::cout << "Player " << (!m_player ? "X" : "O") << " Wins!\n";
		return true;
	}

	if (m_board[0] == m_board[4] && m_board[4] == m_board[8] && m_board[4] != ' ') {
		std::cout << "Player " << (!m_player ? "X" : "O") << " Wins!\n";
		return true;
	}

	if (m_board[2] == m_board[2] && m_board[4] == m_board[6] && m_board[4] != ' ') {
		std::cout << "Player " << (!m_player ? "X" : "O") << " Wins!\n";
		return true;
	}

	return false;
}

void TicTacToe::TakeTurn() {
	int pos = -1;
	while (pos == -1) {
		std::cout << "Player " << (m_player ? "X" : "O") << " choose a location.\n1 2 3\n4 5 6\n7 8 9\n\n";
		std::cin >> pos;
		if (pos >= 1 && pos <= 9) {
			pos--;
			if (m_board[pos] == ' ') {
				m_board[pos] = (m_player ? 'X' : '0');
				m_player = !m_player;
			}
			else { pos = -1; }
		}
		else { pos = -1; }
	}

}

void TicTacToe::Display() const {
	std::cout << "Current Board State:\n";
	for (int i = 0; i < 9; i++) {
		if (i % 3 == 0) { std::cout << "\n-------------\n| "; }
		std::cout << m_board[i] << " | ";
	}
	std::cout << "\n-------------\n\n";
}