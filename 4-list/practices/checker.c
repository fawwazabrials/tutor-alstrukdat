#include <stdio.h>
#include <assert.h>
#include "boolean.h"
#include "listEksplisitKiri.h"

int main() {
    // Constructor tests
    List l1 = MakeList();
    PrintList(l1);
    assert(Length(l1) == 0);

    // Insert procedure tests
    InsertLast(&l1, 2);
    InsertLast(&l1, 3);
    InsertFirst(&l1, 1);
    InsertAt(&l1, 10, 1);

    // Invalid InsertAt operations (these should not alter the list)
    InsertAt(&l1, 10, -1);
    InsertAt(&l1, 10, 1000);

    PrintList(l1);

    assert(Length(l1) == 4);
    assert(Get(l1, 0) == 1);
    assert(Get(l1, 1) == 10);
    assert(Get(l1, 2) == 2);
    assert(Get(l1, 3) == 3);
    assert(FirstIdx(l1) == 0);
    assert(LastIdx(l1) == 3);
    assert(IsIdxEff(l1, 10) == false);
    assert(IsIdxEff(l1, 3) == true);
    assert(IsIdxEff(l1, 4) == false);
    assert(Search(l1, 5) == false);
    assert(Search(l1, 1) == true);

    // Delete procedure tests
    DeleteAt(&l1, 1);
    assert(Length(l1) == 3);
    assert(Get(l1, 0) == 1);
    assert(Get(l1, 1) == 2);
    assert(Get(l1, 2) == 3);

    DeleteFirst(&l1);
    assert(Length(l1) == 2);
    assert(Get(l1, 0) == 2);
    assert(Get(l1, 1) == 3);

    DeleteLast(&l1);
    assert(Length(l1) == 1);
    assert(Get(l1, 0) == 2);

    PrintList(l1);

    // Invalid DeleteAt operation (should not alter the list)
    DeleteAt(&l1, 3);
    assert(Length(l1) == 1);
    assert(Get(l1, 0) == 2);

    DeleteLast(&l1);
    assert(Length(l1) == 0);
    assert(IsEmpty(l1) == true);

    // More Insert and Delete tests
    InsertFirst(&l1, 5);
    assert(Get(l1, 0) == 5);
    assert(Length(l1) == 1);

    InsertLast(&l1, 6);
    assert(Get(l1, 1) == 6);
    assert(Length(l1) == 2);

    InsertAt(&l1, 7, 1);
    assert(Get(l1, 1) == 7);
    assert(Length(l1) == 3);

    DeleteFirst(&l1);
    assert(Get(l1, 0) == 7);
    assert(Length(l1) == 2);

    DeleteAt(&l1, 0);
    assert(Get(l1, 0) == 6);
    assert(Length(l1) == 1);

    DeleteLast(&l1);
    assert(IsEmpty(l1) == true);

    // Stress tests
    List l2 = MakeList();
    for (int i = 0; i < MAX_CAPACITY; i++) {
        Set(&l2, i, i);
        l2.NEff++;
    }

    PrintList(l2);
    assert(IsFull(l2) == true);
    assert(Get(l2, FirstIdx(l2)) == 0);
    assert(Get(l2, LastIdx(l2)) == 99);

    // Attempt to insert into a full list (should not alter the list)
    InsertFirst(&l2, 10203);
    assert(Get(l2, FirstIdx(l2)) == 0);
    assert(Get(l2, LastIdx(l2)) == 99);

    InsertLast(&l2, 93219813);
    assert(Get(l2, FirstIdx(l2)) == 0);
    assert(Get(l2, LastIdx(l2)) == 99);

    assert(IsIdxEff(l2, 10) == true);
    assert(IsIdxValid(l2, 1000) == false);

    // Testing Set and Get
    Set(&l2, 0, 999);
    assert(Get(l2, 0) == 999);
    Set(&l2, 99, 888);
    assert(Get(l2, 99) == 888);

    // Testing Search
    assert(Search(l2, 999) == true);
    assert(Search(l2, 888) == true);
    assert(Search(l2, 777) == false);

    // Testing IsIdxValid and IsIdxEff
    assert(IsIdxValid(l2, 0) == true);
    assert(IsIdxValid(l2, MAX_CAPACITY - 1) == true);
    assert(IsIdxValid(l2, MAX_CAPACITY) == false);
    assert(IsIdxEff(l2, 0) == true);
    assert(IsIdxEff(l2, 50) == true);
    assert(IsIdxEff(l2, 100) == false);

    // Testing List bounds
    assert(Get(l2, -1) == INVALID_VALUE);
    assert(Get(l2, MAX_CAPACITY) == INVALID_VALUE);

    printf("\nCongrats! All test case pass!\n");

    return 0;
}
