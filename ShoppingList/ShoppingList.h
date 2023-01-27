#ifndef SHOPPING_LIST_H
#define SHOPPING_LIST_H
#define SIZE 20
#include <stdio.h>
/*Här lägger du eventuella makrodefinitioner*/

// Struct definitions
struct  GroceryItem {
    char productName[SIZE];
    float amount;
    char unit[SIZE];
};
struct  ShoppingList {
    struct GroceryItem *itemList;
    int length;
    
};


// Function declarations
void YesOrNo(int *flag); //Egengjord
void addItem(struct ShoppingList *list);
void printList(struct ShoppingList *list);
void editItem(struct ShoppingList *list);
void removeItem(struct ShoppingList *list);
void saveList(struct ShoppingList *list); //implementeras i laboration 7
void loadList(struct ShoppingList* list); //implementeras i laboration 7

struct GroceryItem* dynMemory(int size);
void recallMem(struct GroceryItem **oldMem, int newMem);

#endif

