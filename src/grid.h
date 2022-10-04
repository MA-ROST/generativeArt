#pragma once
#include "ofMain.h"

class Grid {
	static constexpr int SHAPE_PADDING{ 10 };
	static constexpr int SHAPE_LEVELS { 15 };
	static constexpr int SHAPE_SIZE = SHAPE_LEVELS * SHAPE_PADDING;

public:
	static constexpr int GRID_SIZE{ 8 };

	void drawRectangle(const int& x, const int& y) const;

	static int calculateScreenSize();
	
};
