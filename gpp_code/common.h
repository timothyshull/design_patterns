#ifndef GPP_COMMON_H
#define GPP_COMMON_H

// Makes the argument appear to be used so that we don't get an unused
// variable warning for it. Lets us leave that warning on to catch unintended
// unused variables.
template<class T>
void use(const T& obj)
{
    // Do nothing.
}

#define ASSERT(condition) \
    if (!(condition)) \
    { \
      std::cout << "FAIL: " #condition << "\n" << __FILE__ \
                << ":" << __LINE__ << std::endl; \
      abort(); \
    }

void assert(bool condition)
{
    if (!condition) {
        printf("WTF\n");
        exit(1);
    }
}

#endif // GPP_COMMON_H