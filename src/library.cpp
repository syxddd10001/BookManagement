#include "library.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;



void Library::printList()
{
    int count = 1;
    for (Book b : book_list)
    {
        cout << count << ". Title: " << b.get_name() << ", Author: " << b.get_author() << ", Year: " << b.get_year() << endl;
        count++;
    }

}


string Library::get_libName()
{
    return library_name;
}

vector <Book> Library::get_bookList()
{
    return book_list;
}

void Library::set_libName(string new_name)
{
    this->library_name = new_name;
}

void Library::addBook(Book b)
{
    book_list.push_back(b);
}



Library::Library(string lib_name, vector <Book> b_l)
{
    this->library_name = lib_name;
    this->book_list = b_l;
}

Library::~Library()
{

}
