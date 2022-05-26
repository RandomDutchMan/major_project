#ifndef Lvl1Rooms_H_
#define Lvl1Rooms_H_

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


class Lvl1Rooms{

private:
       Rooms RoomsArray[MAX_ROOMS];
       int numRooms;

public:
       Lvl1Rooms(){
	    this->numRooms=0;
		memset(this->RoomsArray,0,MAX_ROOMS);
	}  

    int GetNumBooks() { return(numBooks); 	}
	~LibraryCatalog()

	{
		if (bookArray!=NULL)
		{
		  memset(this->bookArray,0,MAX_NUM_BOOKS*BOOK_SIZE);
		  this->numBooks=0;
		}
	}

	LibraryCatalog( LibraryCatalog& x)
	{
		int N = this->numBooks = x.numBooks;
		memcpy(this->bookArray,x.bookArray,BOOK_SIZE*N);	
	}
	
	int InsertAddNew(Book b)
    {
    	int iReturn=-1;
    	if (this->numBooks<MAX_NUM_BOOKS)
    	{
    		  this->bookArray[this->numBooks++] = b;
		}
    	else
    	{
    		iReturn=-1;

		}
		return(iReturn);
	}	


   TBook IndexerGetIndexAt( int iIndexPos)
   {
   	  TBook bookReturn=NULL;
   	   if ((iIndexPos>-1) && (iIndexPos<numBooks))
   	   {
   	   	 bookReturn = new Book(bookArray[iIndexPos]);
	   }
	   return(bookReturn);
   }

	int LinearSearch( TBook b)
	{
	     char targetISBN[ISBN_LENGTH];
	     char curISBN[ISBN_LENGTH];
	     int iReturn=-1;
	     b->GetISBN(targetISBN);

		for (int iLoop=0; iLoop<this->numBooks; iLoop++)
		{
			bookArray[iLoop].GetISBN(curISBN);
			if (strncmp(curISBN,targetISBN,ISBN_LENGTH)==0)
			{
				iReturn=iLoop;
				memcpy(b,&bookArray[iLoop],BOOK_SIZE);
				break;
			}
		}
		return(iReturn);
	}
} *TLibraryCatalog;

#endif /* Rooms_H_ */