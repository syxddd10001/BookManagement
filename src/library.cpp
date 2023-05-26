#include "library.h"
#include <iostream>
#include <string>

using namespace std;



void Library::printList()
{
    for (Book b : book_list)
    {
        cout << "Title: " << b.get_name() << ", Author: " << b.get_author() << ", Year: " << b.get_year();
    }
}


string Library::get_libName()
{
    return library_name;
}

void Library::set_libName(string new_name)
{
    this->library_name = new_name;
}

Library::Library(string lib_name, vector <Book> b_l)
{
    this->library_name = lib_name;
    this->book_list = b_l;
}

Library::~Library()
{

}
