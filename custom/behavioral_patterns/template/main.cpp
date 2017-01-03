#include"Template.h"

int main(int argc, char* argv[])
{
    Abstract_class* p1 = new Concrete_class_1();
    Abstract_class* p2 = new Concrete_class_2();
    p1->template_method();
    p2->template_method();
    return 0;
}
