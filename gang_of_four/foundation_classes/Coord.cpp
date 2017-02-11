#include <cmath>
#include <algorithm>

#include "Coord.h"

Coord min(Coord x, Coord y) { return std::min(x, y); }

Coord max(Coord x, Coord y) { return std::max(x, y); }

Coord abs(Coord x) { return std::abs(x); }

int round(Coord x) { return static_cast<int>(std::lround(x + 0.5)); } // should use GSL narrow
