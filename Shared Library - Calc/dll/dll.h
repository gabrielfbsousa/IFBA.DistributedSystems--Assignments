#ifndef DLL_H
#define DLL_H
#if defined TEST
 #define TEST_COMMON_DLLSPEC Q_DECL_EXPORT
#else
 #define TEST_COMMON_DLLSPEC Q_DECL_IMPORT
#endif

#include "dll_global.h"

class DLLSHARED_EXPORT Dll
{

public:
    Dll();
    int soma(int a,int b);
    int subtracao(int a, int b);
    int multiplicacao(int a, int b);
    int divisao(int a, int b);
};

#endif // DLL_H
