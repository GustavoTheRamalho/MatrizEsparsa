#ifndef MATRIZESPARSA_H
#define MATRIZESPARSA_H
#include "ArvoreAVL.h"

template<class T>
class MatrizEsparsa
{
    public:
        MatrizEsparsa<T>(T, int, int);

        T get(int, int);
        int getLinhas();
        int getColunas();

        void put(T, int, int);
    protected:

    private:
        ArvoreAVL<ArvoreAVL<T>*> *linhas;
        int lins;
        int cols;
        T valorPadrao;



};

#include "../src/MatrizEsparsa.cpp"
#endif // MATRIZESPARSA_H
