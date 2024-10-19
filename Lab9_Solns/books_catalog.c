#include "books_catalog.h"

void addBookToCatalog(BOOK book1)
{
    // implement this function as per specification in books_catalog.h
    if (count < MAX_SIZE)
    {
        booksCatalog[count] = book1;
        count++;
    }
    else
    {
        printf("Catalog is full\n");
    }
    return;
    
}

void printBookCatalog()
{
    // implement this function as per specification in books_catalog.h
    printf("Books in the catalog are:\n");
    for(int i =0; i<count; i++)
    {
        printBook(booksCatalog[i]);
    }
    return;
}

void sortBookCatalogOnID()
{
    // implement this function as per specification in books_catalog.h
    for (int i = 0; i < count - 1; i++) 
    {
        for (int j = 0; j < count - i - 1; j++) 
        {
            if (booksCatalog[j].ID > booksCatalog[j + 1].ID)
            {
                // Swap books
                BOOK temp = booksCatalog[j];
                booksCatalog[j] = booksCatalog[j + 1];
                booksCatalog[j + 1] = temp;
            
        }
    }
}

    return;
}