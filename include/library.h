#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <string>
#include <vector>
#include "book.h"

using namespace std;

class Library
{
    protected:
        vector<Book> book_list;

    public:



        //constructors and destructors
        Library();
        ~Library();



};

#endif // LIBRARY_H
