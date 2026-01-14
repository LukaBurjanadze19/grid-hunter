#pragma once

#include "Graphics.h"
#include "Colors.h"
#include "Vei2.h"

class Board
{
public:
	Board(int in_width, int in_height, Color in_color);
	void DrawCell(const Vei2& gridPos, Graphics& gfx);
private:
	Color c;
	static constexpr int cellSize = 15;
	int width;
	int height;
};