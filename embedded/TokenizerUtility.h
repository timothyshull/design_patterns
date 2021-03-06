#ifndef TOKENIZEMULTIRECEPTORUTILITY_H
#define TOKENIZEMULTIRECEPTORUTILITY_H

typedef enum TSTATETYPE {
    NULL_STATE,
    NONUMBER_STATE,
    GOTNUMBER_STATE
} TSTATETYPE;

typedef enum TSUBSTATETYPE {
    NULL_SSTATE,
    PROCESSINGWHOLEPART_SSTATE,
    PROCESSINGFRACTIONALPART_SSTATE
} TSUBSTATETYPE;

int digit(char c)
{
    return c - '0';
}

#endif // TOKENIZEMULTIRECEPTORUTILITY_H
