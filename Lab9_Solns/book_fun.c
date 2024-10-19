#include "book_def.h"

BOOK newBook(int ID, SHELF shelfNum, float price)
{
    // implement this function as per specification in books_def.h
    BOOK newBook;
    newBook.ID = ID;
    newBook.shelfNum = shelfNum;
    newBook.price = price;
    return newBook;
}

void printBook(BOOK book1)
{
   // implement this function as per specification in books_def.h
   printf("ID  = %d\n", book1.ID);
   printf("Shelf Number = %d\n", book1.shelfNum);
   printf("price = %f\n", book1.price);
   return;
}