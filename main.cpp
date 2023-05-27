#include <iostream>
#include <string>
#include "book.h"
#include "library.h"
#include "user.h"
using namespace std;


vector <User> userList; // user list
User create_profile ( int UID )
{
    string Uname;
    vector <Library> libList1;
    cout << "Enter name: ";
    cin >> Uname;
    User U1(Uname, UID, libList1);
    U1.print_userInfo();
    return U1;
}

Library createLibrary ( )
{
    string libName;
    vector <Book> bookList1;
    cout << "Enter Library name: " << endl;
    cin >> libName;
    Library L1(libName, bookList1);
    return L1;
}


User addLibrary(int mode)
{
    string input1;
    cout << "Enter user ID, ID starts from 0: " << endl;
    cin >> input1;
    int ID = stoi(input1);
    if ( ID >= userList.size() )
    {
        cout << "Request unsuccessful" << endl;

    }
    auto it = userList.begin() + ID;

    if (mode == 1) it->add_library( createLibrary() );

    return *it;

}


int main()
{
    // user has an array of libraries, which have an array of books, which have an array of chapters

    string input; // menu input



    while (true) // main menu
    {
        cout << "Type 1 to create a new profile" << endl;
        cout << "Type 2 to add library to profile" << endl;
        cout << "Type 3 to add book to library" << endl;
        cin >> input;

        if ( input == "1" ) // create new user profile
        {
            User u0 = create_profile(userList.size());
            userList.push_back(u0);
        }

        else if ( input == "users" ) // list all user info
        {
            for (User user : userList)
            {
                user.print_userInfo();
            }
        }


        else if ( input == "2" ) // create new library and add to the specific user
        {
            if ( userList.size() != 0)
            {
                User it = addLibrary(1);
                cout << "Added Library Successfully" << endl;
            }
        }

        else if ( input == "libraries" ) //list all libraries of the specific user
        {
            if ( userList.size() != 0 )
            {
                User it = addLibrary(0);
                it.print_userInfo();
                it.print_libList();
            }
        }

        else if ( input == "3" )
        {

        }
        else
        {
            exit(0);
        }
        cout << endl;

    }


    /*vector <Book> booklist;
    booklist.push_back(Book("Harry Potter","JK Rowling",2001));
    booklist.push_back(Book("The Great Gatsby","F. Scott Fitzgerlad",1999));
    Library L1("library 1", booklist);
    */







    return 0;
}
