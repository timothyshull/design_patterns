#include "TeXCompositor.h"

#include <iostream>

TeXCompositor::TeXCompositor()
{
    std::cout << "TeXCompositor::TeXCompositor()" << "\n";
}

int TeXCompositor::Compose(
    Coord natural[], Coord stretch[], Coord shrink[],
    int componentCount, int lineWidth, int breaks[]
)
{
    std::cout << "TeXCompositor::Compose(...)" << "\n";

    // Uses all the information passed to it.

    return 0;
}
