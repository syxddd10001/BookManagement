#include "user.h"
#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "library.h"

string User::get_Uname()
{
    return name;
}

int User::get_ID()
{
    return ID;
}

vector <Library> User::get_list()
{
    return lib_list;
}

void User::print_userInfo()
{
    cout << "Name: " << name << ", UID: " << ID << ", has " << lib_list.size() << " libraries" << endl;
}

void User::print_libList()
{
    int count = 1;
    for (Library lib : lib_list)
    {
        cout << count << ". " << lib.get_libName() << endl;
        count++;
    }
}

void User::add_library(Library L)
{
    lib_list.push_back(L);
}


User::User(string name, int ID, vector <Library> libList)
{
    this->name = name;
    this->ID = ID;
}



User::~User()
{

}
