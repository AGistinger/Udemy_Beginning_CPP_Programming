#ifndef _INHERITANCECHALLENGEMENU_H_
#define _INHERITANCECHELLANGEMENU_H_
#include "InheritanceChallengeSavings.h"
#include "InheritanceChallengeAccount.h"
#include "InheritanceChallengeChecking.h"
#include "InheritanceChallengeTrust.h"
#include <string>
#include <vector>

void menu();
void go_back(const char &c);
char selection_option();
void create_account_menu (const char &c);
char account_selection_option();
void execute_choice(const char &c);
void execute_create_choice(const char &c);
void create_savings ();
void create_account ();
void create_checking ();
void create_trust ();
Account* find_account ();
void check_balance();
void deposit ();
void withdraw ();
void go_back();
void other ();
void quit ();

#endif //_INHERITANCECHALLENGEMENU_H_