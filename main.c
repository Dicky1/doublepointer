#include "header.h"

int main()
{
    ///====== LIST L1 ======
    List L1;
    CreateList(&L1);
    PrintInfo(L1);
    printf("\nInsVlast L1 dengan nilai 1");
    printf("\nInsVlast L1 dengan nilai 2");
    printf("\nInsVlast L1 dengan nilai 3");
    printf("\nInsVlast L1 dengan nilai 4");
    printf("\nInsVlast L1 dengan nilai 5");
    printf("\nPrintInfo L1 : ");
    InsVLast(&L1,1);
    InsVLast(&L1,2);
    InsVLast(&L1,3);
    InsVLast(&L1,4);
    InsVLast(&L1,5);
    PrintInfo(L1);

    ///====== LIST L2 ======
    List L2;
    CreateList(&L2);
    PrintInfo(L2);
    printf("\nInsVlast L2 dengan nilai 1");
    printf("\nInsVlast L2 dengan nilai 2");
    printf("\nInsVlast L2 dengan nilai 3");
    printf("\nInsVlast L2 dengan nilai 4");
    printf("\nInsVlast L2 dengan nilai 5");
    printf("\nInsVlast L2 dengan nilai 4");
    printf("\nInsVlast L2 dengan nilai 3");
    printf("\nInsVlast L2 dengan nilai 2");
    printf("\nInsVlast L2 dengan nilai 1");
    printf("\nPrintInfo L1 : ");
    InsVLast(&L2,1);
    InsVLast(&L2,2);
    InsVLast(&L2,3);
    InsVLast(&L2,4);
    InsVLast(&L2,5);
    InsVLast(&L2,4);
    InsVLast(&L2,3);
    InsVLast(&L2,2);
    InsVLast(&L2,1);
    PrintInfo(L2);
    printf("\n>>> SOAL <<<");
    ///=======soal 1=======*/
    /*hitung NBElmt ===>jumlah elemen list*/
    printf("\nJumlah elemen L1 : %d",NBElmt(L1));
    printf("\nJumlah elemen L2 : %d",NBElmt(L2));
    ///=======soal 2=====
    /*tentukan IsPolindrome*/
    printf("\nIsPolindrome(L1) : %d",IsPolindrome(L1));
    printf("\nIsPolindrome(L1) : %d",IsPolindrome(L2));
    return 0;
}
