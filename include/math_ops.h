#include "math_ops.h"

#ifndef UNITY_PROGMEM
#define UNITY_PROGMEM
#endif

/* If omitted from header, declare overrideable prototypes here so they're ready for use */
#ifdef UNITY_OMIT_OUTPUT_CHAR_HEADER_DECLARATION
void UNITY_OUTPUT_CHAR(int);
#endif

float multiply(float, float);
float add(float, float);
float square(float);
float cube(float);
float pow(float, int);
float sub(float, float);
float divide(float, float);