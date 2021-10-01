#define WIDTH 10 // width should always be odd
#define HEIGHT 24

#include "Piece.hpp"

class TetrisGame {
	private:
		int game_board[HEIGHT][WIDTH];

	public:
		TetrisGame();
		void rotate(Piece p);
		void drop(Piece p);
		void drop(Piece p, int dist);
};

inline TetrisGame::TetrisGame() {
	for (int i = 0; i < HEIGHT; i++)
		for (int j = 0; j < WIDTH; j++)
			this -> game_board[i][j] = 0;
}
