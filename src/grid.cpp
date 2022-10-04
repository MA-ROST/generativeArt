#include "grid.h"


void Grid::drawRectangle (const int& x, const int& y) const
{
	
	for ( int i = 0; i < SHAPE_LEVELS; ++i ) {
		ofSetColor(ofRandom(1, 256));
		ofDrawRectangle(SHAPE_SIZE * x + (i * SHAPE_PADDING)/2,
			SHAPE_SIZE * y + (i * SHAPE_PADDING)/2,
			SHAPE_SIZE - (i*SHAPE_PADDING), 
			SHAPE_SIZE - (i* SHAPE_PADDING));
	}
}

int Grid::calculateScreenSize ()
{
	return SHAPE_SIZE * GRID_SIZE;
}
