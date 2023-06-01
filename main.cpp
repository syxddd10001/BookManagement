#include <iostream>
#include <string>
#include "book.h"
#include "library.h"
#include "user.h"
using namespace std;


vector <User> userList; // global user list

void create_profile ( int UID )
{
    string Uname; // name
    string pass;
    vector <Library> libList1; // creating new library
    cout << "Enter name: ";
    cin >> Uname; // getting name
    cout << "Enter password: ";
    cin >> pass; // getting name
    User U1(Uname, UID, libList1, pass); // constructing new profile
    U1.print_userInfo(); // printing user info
    userList.emplace_back(U1);

}

Library create_library ( )
{
    string libName; // library name
    vector <Book> bookList1; // creating new book list
    cout << "Enter Library name: " << endl;
    cin >> libName; // getting library name
    Library L1(libName, bookList1); // constructing new library
    return L1; // returning the library
}


void addLibrary( bool create )
{
    string input1;
    cout << "Enter user ID, ID starts from 0: " << endl;
    cin >> input1;
    int ID = stoi(input1);
    if ( ID >= userList.size() )
    {
        cout << "Request unsuccessful" << endl;

    }
    //auto it = userList.begin() + ID;

    if (create == true) userList[ID].add_library( create_library() );

    else userList[ID].print_libList();
}

void addBookToLib( bool create )
{
    string input1;

    cout << "Enter user ID, ID starts from 0: " << endl;
    cin >> input1;
    int UserID = stoi(input1);

    userList[UserID].print_libList();

    cout << "Enter Library Number: " << endl;
    cin >> input1;
    int LibNumber = stoi(input1) - 1;

    if (create == true)
    {


        cout << "Enter Book information: " << endl;

        string newTitle;
        string newAuthor;
        string raw_year;

        cout << "Title: "; cin >> newTitle;

        cout << endl << "Author: "; cin >> newAuthor;

        cout << endl << "Year: "; cin >> raw_year;

        short year = stoi( raw_year );

        cout << endl;

        Book newBook = Book(newTitle, newAuthor, year);



        userList[UserID].get_list()[LibNumber].addBook(newBook);
    }

    else userList[UserID].get_list()[LibNumber].printList();


}

int main()
{
    // user has an array of libraries, which have an array of books, which have an array of chapters


    cout << "books: " << endl;




    string input; // menu input

    while (1) // main menu
    {
        try
        {
            cout << "Type 1 to create a new profile" << endl;
            cout << "Type 2 to add library to profile" << endl;
            cout << "Type 3 to add book to library" << endl;
            cin >> input;

            if ( input == "1" ) // create new user profile
            {
                create_profile(userList.size());
            } else if ( input == "2" ) // create new library and add to the specific user
            {
                if ( userList.size() != 0)
                {
                    addLibrary( true );
                    cout << "Added Library Successfully" << endl;
                }
            } else if ( input == "3" )
            {
                if ( userList.size() != 0){

                    addBookToLib( true );
                }
            }

            else if ( input == "users" ) // list all user info
            {
                for (User user : userList)
                {
                    user.print_userInfo();
                }
            } else if ( input == "libraries" ) //list all libraries of the specific user
            {
                if ( userList.size() != 0 )
                {
                    addLibrary( false );
                }
            } else if ( input == "books" )
            {
                if ( userList.size() != 0)
                {
                    addBookToLib( false );
                }
            }


            else if (input == "exit")
            {
                exit(0);
            }


            else continue;

            cout << endl;

        } catch (...){}
    }









    return 0;
}
