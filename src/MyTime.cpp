#include <iostream>
#include <time.h>

// Função que marca o tempo atual
int tic()
{
    clock_t tic;
    tic=clock();
    return tic;
}

// Função que marca o tempo final
int tac()
{
    clock_t tac;
    tac=clock();
    return tac;
}

// Função que computa o tempo entre um tic e tac
double CompTime(int tic, int tac)
{
    double t = (double)((tac - tic)/(double)CLOCKS_PER_SEC);
    return t;
}