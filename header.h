#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define boolean unsigned char



typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList{
    infotype Info;
    address Next;
    address Prev;
}ElmtList;
typedef struct{
    address First;
    address Last;
}List;

#define Info(P) (P)->Info
#define Next(P) (P)->Next
#define Prev(P) (P)->Prev
#define First(L) (L).First
#define Last(L) (L).Last
#define Nil NULL

int NBElmt(List L);
boolean IsPolindrome(List L);
void CreateList(List *L);
address Alokasi(infotype X);
boolean IsEmpty(List L);
void Dealokasi (address *P);
void InsertFirst(List *L,address P);
void InsVFirst(List *L, infotype X);
void InsertAfter(List *L, address Prec, address P);
void InsertLast(List *L,address P);
void InsVLast(List *L, infotype X);
void PrintInfo(List L);
void PrintBalik(List L);
boolean FSearch(List L, address P);
address Search(List L,infotype X);
void DeleteFirst(List *L,address *P);
void DeleteLast(List *L,address *P);
void DelVFirst(List *L, infotype *X);
void DelVLast(List *L,infotype *X);

#endif // HEADER_H_INCLUDED
