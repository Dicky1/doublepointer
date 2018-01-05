#include "header.h"
///Soal 1
///Poin 60
int NBElmt(List L){
    /*buat codingmu disini*/
    address P;
    P=Last(L);
    int jml=0;
     while(P!=Nil){
        jml++;
        P=Prev(P);
    }
    return jml;
}
///Soal 2
///poin 40
boolean IsPolindrome(List L){
    address awal=First (L);
    address akhir=Last (L);
    int n=0;
    boolean Polindrome;

    while (awal!=Nil&&akhir!=Nil){
        if (Info(awal)==Info(akhir)){
            awal=Next(awal);
            akhir=Next(akhir);
            n++;
        }
        else{
            break;
            Polindrome=false;

        }
    }
    if (n==NBElmt(L)){
        Polindrome=true;
    }
    return Polindrome;
}
void CreateList(List *L){
    First(*L)=Nil;
    Last(*L)=Nil;
}
address Alokasi(infotype X){
    address P;
    P=(address)malloc(sizeof(ElmtList));
    if(P!=Nil){
        Info(P)=X;
        Next(P)=Nil;
        Prev(P)=Nil;
    }
    return P;

}
boolean IsEmpty(List L){
    return (First(L)==Nil||Last(L)==Nil);
}
void Dealokasi (address *P){
    free(*P);
}
void InsertFirst(List *L,address P){
    if(IsEmpty(*L)){
        First(*L)=P;
        Last(*L)=P;
    }
    else{
        Prev(First(*L))=P;
        Next(P)=First(*L);
        First(*L)=P;
    }

}
void InsVFirst(List *L, infotype X){
    address P;
    P=Alokasi(X);
    InsertFirst(&(*L),P);
}
void InsertAfter(List *L, address Prec, address P){

    Prev(Next(Prec))=P;
    Next(P)=Next(Prec);
    Prev(P)=Prec;
    Next(Prec)=P;
}
void InsertLast(List *L,address P){
    Prev(P) = Last(*L);
    if (!IsEmpty(*L)) {
        Next(Last(*L)) = P;
    } else {
        First(*L) = P;
    }
    Last(*L) = P;
}
void InsVLast(List *L, infotype X){
    address P;
    P=Alokasi(X);
    InsertLast(&(*L),P);
}
void PrintInfo(List L){
    address P;

    if(IsEmpty(L)){
        printf("\nList Kosong");
    }
    else{
        P=First(L);
        printf("||");
        while(P!=Nil){
        printf(" %d ||",Info(P));
        P=Next(P);
    }
    }
}





void PrintBalik(List L){
    address P;
    P=Last(L);
    while(P!=Nil){
        printf("%d||",Info(P));
        P=Prev(P);
    }
}
void InsertAfter(List *L, address Prec, address P)
{
    Next(P)=Next(Prec);
    Prev(Next(Prec))=P;
    Next(Prec)=P;
    Prev(P)=Prec;
}
void InsertLast(List *L,address P)
{
    if (IsEmpty(*L)){
        First(*L)=P;
        Last(*L)=P;
    }
    else{
        Next(Last(*L))=L;
        Prev(P)=Last(*L);
        Last(*L)=P;
    }
}
void InsVLast(List *L, infotype X)
{
    address P;
    P=Alokasi(X);
    InsertLast (&(*L),P);
}
