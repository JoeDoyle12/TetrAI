class Piece:
	def __init__(arrangment, color, w, h):
		self.color = color
		self.arrangement = arrangement
		self.i = (w - 1) / 2
		self.j = 0
		self.w = w
		self.h = h
