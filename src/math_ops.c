#include "math_ops.h"

#ifndef UNITY_PROGMEM
#define UNITY_PROGMEM
#endif

/* If omitted from header, declare overrideable prototypes here so they're ready for use */
#ifdef UNITY_OMIT_OUTPUT_CHAR_HEADER_DECLARATION
void UNITY_OUTPUT_CHAR(int);
#endif

// --------- FUNCTION IMPLEMENTATIONS ------------

float multiply(float x, float y) 
{
    return x * y;
}

float add(float x, float y) 
{
    return x + y;
}

float square(float x) 
{
    return x * x;
}

float cube(float x) 
{
    return x * x * x;
}

float pow(float base, int exponent ) 
{
    float res = 1;
    for(int i = 0; i < exponent; i++) 
    {
        res *= base;
    }
    return res;
}

float sub(float a, float b)
{
    return a - b;
}

float divide(float a, float b)
{
    return a / b;
}