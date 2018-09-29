#include "MatrizEsparsa.h"

MatrizEsparsa::MatrizEsparsa(int vp, int i, int j)
{
    this->linha = new ArvoreAVL<int>();
    this->lins = i;
    this->cols = j;
    this->valorPadrao = vp;
}


MatrizEsparsa::getDado(int i, int j)
{

}
