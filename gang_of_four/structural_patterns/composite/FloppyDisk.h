#ifndefsDESIGN_PATTERNS_FLOPPY_DISK_H
#definesDESIGN_PATTERNS_FLOPPY_DISK_H

#include "Equipment.h"

class FloppyDisk : public Equipment {
public:
    FloppyDisk(const char*);
    virtual ~FloppyDisk();

    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();
};

#endif /* FLOPPY_DISK_H */
