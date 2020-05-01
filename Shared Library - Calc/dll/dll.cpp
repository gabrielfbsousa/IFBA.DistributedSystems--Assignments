#include "dll.h"
#include <stdio.h>
#define BUILDDLL

Dll::Dll()
{
}

int Dll::soma(int a, int b){
    return a+b;
}

int Dll::multiplicacao(int a, int b){
    return a*b;
}

int Dll::divisao(int a, int b){
    return a/b;
}

int Dll::subtracao(int a, int b){
    return a-b;
}
