#include<iostream>
#include"Constant.h"
#include"Variable_exp.h"
#include"And_exp.h"
#include"Or_exp.h"
#include"Not_exp.h"

int main()
{
    Context context;

    Variable_exp* x{new Variable_exp{"X"}};
    Variable_exp* y{new Variable_exp{"Y"}};

    Boolean_exp* expression{new Or_exp{new And_exp{new Constant{true}, x}, new And_exp{y, new Not_exp{x}}}};

    context.assign(x, false);
    context.assign(y, true);

    bool result{expression->evaluate(context)};

    std::cout << "result = " << std::boolalpha << result << "\n";

    Boolean_exp* replacement;
    Variable_exp* z{new Variable_exp{"Z"}};

    replacement = new Not_exp{z};
    expression->replace("Y", *replacement);

    context.assign(z, true);

    result = expression->evaluate(context);

    std::cout << "result = " << std::boolalpha << result << "\n";

    return 0;
}
