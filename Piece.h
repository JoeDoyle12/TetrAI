class Piece {
	private:
		int color, i, j; // i = dist from top, j = dist from left
		bool** arrangement;

	public:
		Piece(bool** arrangement);
		bool** rotate();
		int getI();
		int getJ();
		void incI();
		void incJ();
}

Piece::Piece(bool** arrangment, int color) {
	this -> color = color;
	this -> arrangement = arrangement;
	this -> i = (WIDTH - 1) / 2;
	this -> j = 0;
}

Piece::getI() { return this -> i; }
Piece::getJ() { return this -> j; }
Piece::incI() { this -> i ++; }
Piece::incJ() { this -> j ++; }
