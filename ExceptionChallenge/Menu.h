#ifndef _MENU_H_
#define _MENU_H_
#include "Savings.h"
#include "Account.h"
#include "Checking.h"
#include "Trust.h"
#include <string>
#include <vector>
#include <memory>

//Menu Functions
void menu();
void go_back(const char &c);
char selection_option();
void create_account_menu (const char &c);
char account_selection_option();
void execute_choice(const char &c);
void execute_create_choice(const char &c);
void create_savings ();
void create_checking ();
void create_trust ();
std::shared_ptr<Account>  find_account ();
bool find_name(std::string name);
void check_balance();
void display_all_accounts();
void deposit ();
void withdraw ();
void remove_account();
void go_back();
void other ();
void quit ();

#endif // _MENU_H_
