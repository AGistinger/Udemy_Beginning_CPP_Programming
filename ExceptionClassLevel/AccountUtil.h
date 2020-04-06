#ifndef _ACCOUNTUNTIL_H_
#define _ACCOUNTUNTIL_H_
#include <vector>
#include "Account.h"

//Utility helper functions for Account* class
void display(const std::vector<Account*> &accounts);
void deposit(std::vector<Account*> &accounts, double amount);
void withdraw(std::vector<Account*> &accounts, double amount);

#endif // _ACCOUNTUNTIL_H_
