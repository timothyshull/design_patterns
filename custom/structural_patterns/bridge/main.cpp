#include <iostream>
#include "Abstraction.h"
#include "Abstraction_impl.h"

int main(int argc, char* argv[])
{
    Abstraction_impl* imp = new Concrete_abstraction_impl_a();
    Abstraction* abs = new Refined_abstraction(imp);
    abs->operation();
    return 0;
}
