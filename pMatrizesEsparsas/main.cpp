#include <iostream>
#include "ArvoreAVL.h"
#include "MatrizEsparsa.h"
#include "No.h"


using namespace std;

int main()
{


    MatrizEsparsa<int>* mat = new MatrizEsparsa<int>(0, 20, 20);

    mat->put(1, 10, 10);
    mat->put(2, 12, 12);
    mat->put(3, 13, 13);
    mat->put(0, 13, 13);

/*
    for (int i=0; i<20; i++)
    {
        for (int j = 0; j<20; j++)
            printf("%d", mat->get(i, j));
        printf("\n");
    }*/





    return 0;
}
