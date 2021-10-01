class Piece {
	private:
		int color, i, j; // i = dist from top, j = dist from left
		bool** arrangement;

	public:
		Piece(bool** arrangement, int color);
		bool** rotate();
		int getI();
		int getJ();
		void incI();
		void incJ();
};

inline Piece::Piece(bool** arr, int color) {
	this -> color = color;
	this -> arrangement = arr;
	this -> i = (WIDTH - 1) / 2;
	this -> j = 0;
}

inline int Piece::getI() { return this -> i; }
inline int Piece::getJ() { return this -> j; }
inline void Piece::incI() { this -> i ++; }
inline void Piece::incJ() { this -> j ++; }

