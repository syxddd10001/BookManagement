#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <vector>
using namespace std;

class Book
{
    protected:
        string title;
        string author;
        short year;
        vector <string> chapters;

    public:
        // getters
        string get_name();
        string get_author();
        short get_year();

        // setters
        void set_name(string new_name);
        void set_author(string new_author);
        void set_year(short new_year);

        // constructors and destructors
        Book(string title, string author);
        Book(string title, string author, short year);
        ~Book();

};

#endif // BOOK_H
