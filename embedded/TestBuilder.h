#ifndef DESIGN_PATTERNS_TESTBUILDER_H
#define DESIGN_PATTERNS_TESTBUILDER_H

#include <stdio.h>
#include "ECGPkg.h"
#include "ArrythmiaDetector.h"
#include "ECG_Module.h"
#include "HistogramDisplay.h"
#include "QRSDetector.h"
#include "TMDQueue.h"
#include "WaveformDisplay.h"

/* class TestBuilder */
typedef struct TestBuilder TestBuilder;

struct TestBuilder {
    struct ArrythmiaDetector itsArrythmiaDetector;
    struct ECG_Module itsECG_Module;
    struct HistogramDisplay itsHistogramDisplay;
    struct QRSDetector itsQRSDetector;
    struct TMDQueue itsTMDQueue;
    struct WaveformDisplay itsWaveformDisplay;
};

/* Constructors and destructors:*/
void TestBuilder_Init(TestBuilder* const me);

void TestBuilder_Cleanup(TestBuilder* const me);

struct ArrythmiaDetector* TestBuilder_getItsArrythmiaDetector(const TestBuilder* const me);

struct ECG_Module* TestBuilder_getItsECG_Module(const TestBuilder* const me);

struct HistogramDisplay* TestBuilder_getItsHistogramDisplay(const TestBuilder* const me);

struct QRSDetector* TestBuilder_getItsQRSDetector(const TestBuilder* const me);

struct TMDQueue* TestBuilder_getItsTMDQueue(const TestBuilder* const me);

struct WaveformDisplay* TestBuilder_getItsWaveformDisplay(const TestBuilder* const me);

TestBuilder* TestBuilder_Create(void);

void TestBuilder_Destroy(TestBuilder* const me);

#endif // DESIGN_PATTERNS_TESTBUILDER_H
