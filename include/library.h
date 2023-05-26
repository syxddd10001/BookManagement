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
        string library_name;
        vector<Book> book_list;



    public:

        //setters and getters
        string get_libName();
        void set_libName(string new_name);


        //functions
        void printList();
        void addBook(Book b);
        void removeBook(string bookTitle);



        //constructors and destructors
        Library(string library_name, vector<Book> book_list);
        ~Library();



};

#endif // LIBRARY_H
