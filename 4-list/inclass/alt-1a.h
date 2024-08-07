#ifndef LIST_ALT_1A_H
#define LIST_ALT_1A_H

int const CAPACITY = 100;
int const MARK = -9999;
int const IDX_UNDEF = -1;

typedef int ElType;
typedef struct {
    ElType contents[CAPACITY];
} list;

// KONSTRUKTOR
void createList(list* l);

// SELEKTOR
int isEmpty(list l);

int length(list l);

ElType getElmt(list l, int idx);

void setElmt(list* l, int idx, ElType val);

// OPERASI
ElType indexOf(list l, ElType x);

void insertAt(list *l, ElType el, int i);

void insertLast(list *l, ElType el);

void insertFirst(list *l, ElType el);

void deleteAt(list *l, int i);

void deleteLast(list *l);

void deleteFirst(list *l);

list concat(list l1, list l2);

void printList(list l);

#endif