#include "Board.h"

Board::Board(int in_width, int in_height, Color in_color)
	:
	width(in_width),
	height(in_height),
	c(in_color)
{
}

void Board::DrawCell(const Vei2& gridPos, Graphics& gfx)
{
	gfx.DrawRectDim(gridPos * cellSize, cellSize, cellSize, c);
}