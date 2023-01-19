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
    struct recept *receptlista;//Exemanation
    
};
struct recept{ //Exemanation
    char namn[SIZE];//Exemanation
    int amountOfPersons;//Exemanation
    int lenght;//Exemanation
    struct GroceryItem *itemList; //Exemanation
};


/*Deluppgift 3 - definiera dina strukter här.           *
 *Det är viktigt att du använder de namn som anges i    *
 *uppgiftsspecifikationen, har du inte gjort det kommer *
 *resten av kodskelettet inte att kompilera.            *
 *När du definierat strukternakommer eventuella         *
 *varningar att försvinna och du ska kunna kompilera    *
 *och köra programmet, ingenting kommer dock att hända  *
 *när du gör val i menyn.                               */



// Function declarations
void YesOrNo(int *flag); //Egengjord
void addItem(struct ShoppingList *list);
void printList(struct ShoppingList *list);
void editItem(struct ShoppingList *list);
void removeItem(struct ShoppingList *list);
void saveList(struct ShoppingList *list); //implementeras i laboration 7
void loadList(struct ShoppingList* list); //implementeras i laboration 7

void ChangeRecipeName(struct ShoppingList*);//Exemanation
void scaleRecipe(struct ShoppingList*); //Exemanation

struct GroceryItem* dynMemory(int size);
void recallMem(struct GroceryItem **oldMem, int newMem);
struct recept* dynMemory2(int size); //Exemanation
#endif

