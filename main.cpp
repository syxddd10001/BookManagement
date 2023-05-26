#include <iostream>
#include <string>
#include "book.h"
#include "library.h"
using namespace std;



int main()
{
    vector <Book> booklist;
    booklist.push_back(Book("Harry Potter","JK Rowling",2001));

    Library L1("library 1", booklist);
    L1.printList();

    return 0;
}
