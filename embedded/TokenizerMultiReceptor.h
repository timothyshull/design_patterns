#ifndef TOKENIZEMULTIRECEPTOR_H
#define TOKENIZEMULTIRECEPTOR_H

#include "TokenizerMultiReceptor.h"
#include "TokenizerUtility.h"

struct Mutex;

typedef struct TokenizerMultiReceptor TokenizerMultiReceptor;

struct TokenizerMultiReceptor {
    char ch;
    double result;
    TSTATETYPE stateID;
    TSUBSTATETYPE subStateID;
    double tensPlace;
    struct Mutex* itsMutex;
};

/* Constructors and destructors:*/
void TokenizerMultiReceptor_Cleanup(TokenizerMultiReceptor* const me); /* Operations */
void TokenizerMultiReceptor_evDigit(TokenizerMultiReceptor* const me, char c);

void TokenizerMultiReceptor_evDot(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_evEndOfString(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_evWhiteSpace(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_enter_GotNumber(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_enter_NoNumber(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_enter_ProcessingFractionalPart(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_enter_ProcessingWholePart(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_exit_GotNumber(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_exit_NoNumber(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_exit_ProcessingFractionalPart(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_exit_ProcessingWholePart(TokenizerMultiReceptor* const me);

TokenizerMultiReceptor* TokenizerMultiReceptor_Create(void);

void TokenizerMultiReceptor_Destroy(TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_Init(TokenizerMultiReceptor* const me);

struct Mutex* TokenizerMultiReceptor_getItsMutex(const TokenizerMultiReceptor* const me);

void TokenizerMultiReceptor_setItsMutex(TokenizerMultiReceptor* const me, struct Mutex* p_Mutex);

#endif // TOKENIZEMULTIRECEPTOR_H
