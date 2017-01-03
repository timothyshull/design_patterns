#ifndefsDESIGN_PATTERNS_CABINET_H
#definesDESIGN_PATTERNS_CABINET_H

#include "CompositeEquipment.h"

class Cabinet : public CompositeEquipment {
public:
    Cabinet(const char*);
    virtual ~Cabinet();

    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();
};

#endif /* CABINET_H */
