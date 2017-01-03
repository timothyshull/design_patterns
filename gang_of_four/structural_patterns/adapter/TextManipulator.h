#ifndefsDESIGN_PATTERNS_TEXT_MANIPULATOR_H
#definesDESIGN_PATTERNS_TEXT_MANIPULATOR_H

#include "Manipulator.h"

class TextShape;

class TextManipulator : public Manipulator {
public:
    TextManipulator(const TextShape* s);
private:
    const TextShape* _textShape;
};

#endif /* TEXT_MANIPULATOR_H */
