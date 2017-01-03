#include "SimpleCompositor.h"

#include <iostream>

SimpleCompositor::SimpleCompositor()
{
    std::cout << "SimpleCompositor::SimpleCompositor()" << "\n";
}

int SimpleCompositor::Compose(
    Coord natural[], Coord stretch[], Coord shrink[],
    int componentCount, int lineWidth, int breaks[]
)
{
    std::cout << "SimpleCompositor::Compose(...)" << "\n";

    // Ignores stretchability of the components, taking only their
    // natural widths into account.

    return 0;
}
