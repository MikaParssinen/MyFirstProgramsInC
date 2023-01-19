#define _CRT_SECURE_NO_WARNINGS
#include "ShoppingList.h"
#include <stdio.h>
#include <stdlib.h>
#define CLEAR while(getchar()!='\n'))
int main(void)
{
    struct ShoppingList shoppingList;
    shoppingList.length = 0; // The shopping list is empty at the start
    shoppingList.itemList = NULL;
    
    int option;

    do
    {
        printf("\n\nWelcome to the shopping list manager!\n");
        printf("=====================================\n\n");

        printf("1. Add an item\n");
        printf("2. Display the shopping list\n");
        printf("3. Remove an item\n");
        printf("4. Change an item\n");
        printf("5. Save list\n"); //implementeras i laboration 7
        printf("6. Load list\n"); //implementeras i laboration 7
        printf("7. Change name on recipe\n"); //Exemanation
        printf("8. Scale recepie\n"); //Exemanation
        printf("9. Exit\n");

        printf("What do you want to do? ");
        scanf("%d", &option);
        

        switch (option)
        {
        case 1: addItem(&shoppingList); break;
        case 2: printList(&shoppingList); break;
        case 3: removeItem(&shoppingList); break;
        case 4: editItem(&shoppingList); break;
        case 5: saveList(&shoppingList); break; //implementeras i laboration 7
        case 6: loadList(&shoppingList); break; //implementeras i laboration 7
        case 7: ChangeRecipeName(&shoppingList); break; //Exemanation
        case 8: scaleRecipe(&shoppingList); break;
        case 9: break;
        default:
            printf("Please enter a number between 1 and 9");
        }
    } while (option != 9);
   
    free(shoppingList.itemList);
    free(shoppingList.receptlista);
    return 0;
}

