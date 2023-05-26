#include "book.h"
#include <iostream>
#include <string>


using namespace std;

string Book::get_name()
{
    return title;
}

string Book::get_author()
{
    return author;
}

short Book::get_year()
{
    return year;
}

void Book::set_name(string new_title)
{
    this->title = new_title;
}

void Book::set_author(string new_author)
{
    this->author = author;
}

void Book::set_year(short new_year)
{
    this->year = new_year;
}

Book::Book(string title, string author)
{
    this->title = title;
    this->author = author;
}


Book::Book(string title, string author, short year)
{
    this->title = title;
    this->author = author;
    this->year = year;
}

Book::~Book()
{

}

