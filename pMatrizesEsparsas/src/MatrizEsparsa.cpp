#ifndef MATRIZESPARSA_CPP
#define MATRIZESPARSA_CPP


#include "MatrizEsparsa.h"

template<class T>
MatrizEsparsa<T>::MatrizEsparsa(T vp, int i, int j)
{
    this->linhas = new ArvoreAVL<ArvoreAVL<int>*>();
    this->lins = i;
    this->cols = j;
    this->valorPadrao = vp;
}

template<class T>
T MatrizEsparsa<T>::get(int i, int j)
{
    if (!this->linhas->existe(i))
        return this->valorPadrao;

    ArvoreAVL<int>* colunas = linhas->get(i);

    if (!colunas->existe(j))
        return this->valorPadrao;

    return colunas->get(j);
}

template<class T>
void MatrizEsparsa<T>::put(T info, int i, int j)
{
     if (!this->linhas->existe(i) && info != valorPadrao)
     {
         ArvoreAVL<T> *coluna = new ArvoreAVL<T>();
         coluna->incluir(j, info);
         this->linhas->incluir(i, coluna);
     }
     else
     {
          ArvoreAVL<T> *coluna = linhas->get(i);

          if (coluna->existe(j))
              coluna->remover(j);

          if (info != valorPadrao)
              coluna->incluir(j, info);
     }
}

#endif
