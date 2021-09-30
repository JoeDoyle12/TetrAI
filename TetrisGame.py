class TetrisGame:
	def __init__(self, w, h):
		self.game_board = [[0] * w] * h
		self.w = w
		self.h = h
	def can_move_right(self):
		for i in range(4):
			for j in range(4):
				if self.curr_piece.arrangement[i][j] and self.game_board[self.curr_piece.i + i][self.cur_piece.j + j] != 0:
					return False
				elif self.curr_piece.arrangement[i][j] and self.curr_piece.i + i >= self.w:
					return False
		return True
	def move_right(self):
		if can_move_right is False:
			return
		for i in range(4):
			for j in range(4):
				if self.curr_pieec.arrangement[i][j] is False:
					continue
				self.game_board[self.curr_piece.i + i][self.curr_piece.j + j] = 0
				self.game_board[self.curr_piece.i + i + 1][self.curr_piece.j + j + 1] = self.curr_piece.color
		
