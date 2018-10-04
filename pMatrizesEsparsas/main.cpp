#include <iostream>
#include "ArvoreAVL.h"
#include "MatrizEsparsa.h"
#include "No.h"


using namespace std;

int main()
{
    ArvoreAVL<int> *arv = new ArvoreAVL<int>();



    arv->incluir(2, 2);
    //arv->test();
    arv->incluir(3, 3);
    //arv->test();
    arv->incluir(1, 1);
    //arv->test();
    arv->incluir(4, 4);
    //arv->test();
    arv->incluir(0, 0);
    //arv->test();
    arv->incluir(-1, -1);
    arv->test();


/*
    MatrizEsparsa<int>* mat = new MatrizEsparsa<int>(0, 100, 100);
    mat->put(1, 10, 10);
    mat->put(9, 30, 40);
    mat->put(1, 80, 90);
    mat->put(4, 10, 15);
  //  mat->put(0, 80, 90);

    for (int i=0; i<100; i++)
    {
        for (int j = 0; j<100; j++)
            printf("%d", mat->get(i, j));
        printf("\n");
    }


*/

    cout << *arv << endl;




    return 0;
}
