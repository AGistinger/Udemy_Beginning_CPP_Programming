#ifndef _POLYUTIL_H_
#define _POLYUTIL_H_
#include "PolyAccount.h"
#include <vector>

//Utility helper functions for Account* class
void display(const std::vector<Account*> &accounts);
void deposit(std::vector<Account*> &accounts, double amount);
void withdraw(std::vector<Account*> &accounts, double amount);

#endif //_POLYUTIL_H_