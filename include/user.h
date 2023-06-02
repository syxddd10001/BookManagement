#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "library.h"
class User
{
    protected:
        string name;
        int ID;
        vector <Library> lib_list;
        string password;

    public:

        string get_Uname();
        int get_ID();
        vector<Library>& get_list();
        void print_libList();

        void print_userInfo();

        void add_library(Library L);
        void remove_library();

        string getPassword();

        User(string name, int ID, vector <Library> libList, string password);
        ~User();




};

#endif // USER_H
