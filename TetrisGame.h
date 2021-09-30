#define WIDTH 10 // height should always be odd
#define HEIGHT 24

class TetrisGameClass {
	private:
		int game_board[HEIGHT][WIDTH];

	public:
		TetrisGameClass();
		void rotate(Piece p);
		void drop(Piece p);
		void drop(Piece p, int dist);
}

TetrisGameClass::TetrisGameClass() {
	for (int i = 0; i < HEIGHT; i++)
		for (int j = 0; j < WIDTH; j++)
			this -> game_board[i][j] = 0;
}
