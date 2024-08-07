#include "alt-1a.h"
#include <stdio.h>

// Ini membuat implementasi list implisit dengan metode
// rata-kiri (alt-1a)

// KONSTRUKTOR
void createList(list* l) {
    for (int i=0; i<100; i++) {
        l->contents[i] = MARK;
    }
}

// SELEKTOR
int isEmpty(list l) {
    int len = length(l);
    if (len == 0) {
        return 1;
    } else {
        return 0;
    }
}

int length(list l) {
    int idx = 0;
    int len = 0;
    while ((idx < CAPACITY) && (l.contents[idx]) != MARK) {
        len++;
        idx++;
    }
    return len;
}

ElType getElmt(list l, int idx) {
    // int counter = 0;
    // while (counter < CAPACITY) {
    //     if (counter == idx) {
    //         return l.contents[counter];
    //     }

    //     counter++;
    // }

    // return -9999;

    return l.contents[idx];
}

void setElmt(list* l, int idx, ElType val) {
    if (idx < length(*l) + 1) {
        l->contents[idx] = val;
    }
}

// OPERASI
int indexOf(list l, ElType x) {
    int len = length(l);
    for (int i=0; i<len; i++) {
        if (l.contents[i] == x) {
            return i;
        }
    }
    return IDX_UNDEF;
}

void insertAt(list *l, ElType el, int idx) {
    // nambahinnya di awal (geser-geser semua)
    if (length(*l) < CAPACITY) {
        if (idx == 0) {
            ElType tmp = MARK;
            for (int i=0; i<length(*l)+1; i++) {
                tmp = l->contents[i];
                l->contents[i] = tmp;
            }
        }

        // nambahinnya di akhir (gaperlu geser)
        else if (idx == length(*l)) {
        }

        // nambahinnya di tengah (geser-geser beberapa)
        else {
            ElType tmp = MARK;
            for (int i=idx; i<length(*l)-idx; i++) {
                tmp = l->contents[i];
                l->contents[i] = tmp;
            }
        }
        setElmt(l, idx, el);
    }

    // index melebihi batas (do nothing)
}

void insertLast(list *l, ElType el) {
    insertAt(l, el, length(*l));
}

void insertFirst(list *l, ElType el) {
    insertAt(l, el, 0);
}

void deleteLast(list *l) {
    if (!isEmpty(*l)) {
        int lastIdx = length(*l)-1;
        l->contents[lastIdx] = MARK;
    }
}

void deleteFirst(list *l) {
    if (!isEmpty(*l)) {
        for (int i=0; i<length(*l); i++) {
            l->contents[i] = l->contents[i+1];
        }
    }
}

void deleteAt(list *l, int idx) {
    // ngapus diawal
    if (idx == 0) {
        deleteFirst(l);
    }
    else if (idx == length(*l)) {
        deleteLast(l);
    }
    else {
        if (!isEmpty(*l)) {
            for (int i=idx; i<length(*l)-idx; i++) {
                l->contents[i] = l->contents[i+1];
            }
        }
    }
}


list concat(list l1, list l2) {
    list l;
    createList(&l);

    for (int i=0; i<length(l1); i++) {
        insertLast(&l, l1.contents[i]);
    }

    for (int i=0; i<length(l2); i++) {
        insertLast(&l, l2.contents[i]);
    }

    return l;
}

void printList(list l) {
    for (int i=0; i<length(l); i++) {
        printf("%d,", l.contents[i]);
    }
}