#ifndefsDESIGN_PATTERNS_COMPILER_H
#definesDESIGN_PATTERNS_COMPILER_H

#include <istream>
#include "BytecodeStream.h"
using namespace std;
 
class Compiler {
public:
    Compiler();

    virtual void Compile(istream&, BytecodeStream&);
};

#endif /* COMPILER_H */
