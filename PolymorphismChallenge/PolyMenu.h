#ifndef _POLYMENU_H_
#define _POLYMENU_H_
#include "PolySavings.h"
#include "PolyAccount.h"
#include "PolyChecking.h"
#include "PolyTrust.h"
#include <string>
#include <vector>

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
Account* find_account ();
void check_balance();
void display_all_accounts();
void deposit ();
void withdraw ();
void remove_account();
void go_back();
void other ();
void quit ();

#endif //_POLYMENU_H_