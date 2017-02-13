#ifndef GPP_HELLO_WORLD
#define GPP_HELLO_WORLD

#include <iostream>

class HelloWorld {
public:
    //^1
    // 64 characters --------------------------------------------------------|
    static void Do()
    {
        //^2
        std::cout << "Hello world." << std::endl;
        //^2
    }
    //^1
};

#endif // GPP_HELLO_WORLD
