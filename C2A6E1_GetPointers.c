//
// Aladin Sidahmed U08614258 
// aladin.sidahmed@gmail.com
// C/C++ Programming II 
// Section 145010 Ray Mitchell 
// 20 FEB 2020
// C2A6E1_GetPointers.c
// Operating System: Windows 7 
// Visual Studio Community 2019 Version 16.3.2 
//
// Implements two functions that return function pointers 
// to puts and printf
//

#include <stdio.h>
int (*GetPrintfPointer(void))(const char *format, ...)
{
    //int printf ( const char * format, ... );
    int (*pPrintf)(const char *format, ...) = printf;
    return pPrintf;
}

int (*GetPutsPointer(void))(const char *str)
{
    //int puts ( const char * str );
    int (*pPuts)(const char *str) = puts;
    return pPuts;
}
