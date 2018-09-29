#ifndef MATRIZESPARSA_H
#define MATRIZESPARSA_H
#include "ArvoreAVL.h"

class MatrizEsparsa
{
    public:
        MatrizEsparsa(int, int, int);

        int getDado(int, int);
        int getLinhas();
        int getColunas();

        void setDado(int, int);
    protected:

    private:
        ArvoreAVL<ArvoreAVL<int>> *linha;
        int lins;
        int cols;
        int valorPadrao;



};

#endif // MATRIZESPARSA_H
