#include "DottedLineStyle.h"
#include <iostream>

void DottedLineStyle::plotLine(PointPair end_points)
{
        auto display = getDisplay();
        display->drawDot(end_points.first(), getColour()); 
        display->drawDot(end_points.second(), getColour()); 
}
