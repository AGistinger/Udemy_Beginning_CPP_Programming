#include "InheritanceChallengeMenu.h"
#include "InheritanceChallengeAccount.h"
#include "InheritanceChallengeSavings.h"
#include "InheritanceChallengeChecking.h"
#include "InheritanceChallengeTrust.h"
#include <iostream>
#include <string>
#include <vector>

//Global Variables - pointer to a vector holding pointers to account objects
std::vector<Account*> *all_accounts = new std::vector<Account*> {};
std::vector<Savings_Account*> *sav_accounts = new std::vector<Savings_Account*> {};
std::vector<Checking_Account*> *check_accounts = new std::vector<Checking_Account*> {};
std::vector<Trust_Account*> *trust_accounts = new std::vector<Trust_Account*> {};

//Display Menu
void menu()
{
    std::cout << "\n======Menu===========" << std::endl;
    std::cout << "D - Deposit" << std::endl;
    std::cout << "B - Balance" << std::endl;
    std::cout << "W - Withdraw" << std::endl;
    std::cout << "C - Create Account" << std::endl;
    std::cout << "Q - Quit" << std::endl;
}

//Select Option from Main Menu
char selection_option()
{
    char selection {};
    std::cout << "Please selection an option from the Menu: ";
    std::cin >> selection;
    selection = toupper(selection);
    return selection;
}

//Menu for Create Account
void create_account_menu (const char &c)
{
    char selection {};
    do
    {
        std::cout << "\n=====Create Account Menu=========" << std::endl;
        std::cout << "A - Standard Account" << std::endl;
        std::cout << "S - Savings Account" << std::endl;
        std::cout << "C - Checking Account" << std::endl;
        std::cout << "T - Trust Account" << std::endl;
        std::cout << "B - Go Back" << std::endl;
        
        selection = account_selection_option();
        execute_create_choice(selection);
    }
    while (selection != 'B');
}

//Select Option for Account Creation
char account_selection_option()
{
    char selection {};
    std::cout << "\nPlease select the Account type you would like to create: ";
    std::cin >> selection;
    selection = toupper(selection);
    return selection;
}

//Execution of the Selected Choice
void execute_choice(const char &c)
{
    switch(c)
    {
        case 'B' : check_balance();
            break;
        case 'D' : deposit();
            break;
        case 'W' : withdraw();
            break;
        case 'C' : create_account_menu(c);
            break;
        case 'Q' : quit();
            break;
        default : other();
            break;
    }
}

//Execution of Create Account for Selected Choice
void execute_create_choice(const char &c)
{
    switch(c)
    {
        case 'A' : create_account();
            break;
        case 'S' : create_savings();
            break;
        case 'C' : create_checking();
            break;
        case 'T' : create_trust();
            break;
        case 'B' : go_back();
            break;
        default : other();
            break;
    }
}

//Create Savings Account
void create_savings ()
{
    std::string *name = new std::string{};
    std::cout << "\nPlease enter Your Name for the Savings Account: ";
    std::cin >> *name;
    Savings_Account *sav_account = new Savings_Account{*name};
    sav_accounts->push_back(sav_account);
    std::cout << "Created: " << *sav_account << std::endl;
    delete name;
}

//Create Account
void create_account ()
{
   std::string *name = new std::string{};
    std::cout << "\nPlease enter Your Name for the Account: ";
    std::cin >> *name;
    Account *account = new Account{*name};
    all_accounts->push_back(account);
    std::cout << "Created: " << *account << std::endl;
    delete name; 
}

//Create Checking Account
void create_checking ()
{
    std::string *name = new std::string{};
    std::cout << "\nPlease enter Your Name for the Checking Account: ";
    std::cin >> *name;
    Checking_Account *check_account = new Checking_Account{*name};
    check_accounts->push_back(check_account);
    std::cout << "Created: " << *check_account << std::endl;
    delete name; 
}

//Create Trust Account
void create_trust ()
{
    std::string *name = new std::string{};
    std::cout << "\nPlease enter Your Name for the Trust Account: ";
    std::cin >> *name;
    Trust_Account *tru_account = new Trust_Account{*name};
    trust_accounts->push_back(tru_account);
    std::cout << "Created: " << *tru_account << std::endl;
    delete name; 
}

//Find Account
Account* find_account()
{
    std::string name {};
    std::cout << "\nEnter the account name that you want to find: ";
    std::cin >> name;
    
    for(auto account : *all_accounts)
    {
        if(account->get_name() == name)
        {
            return account;
        }
    }
    
    for(auto account : *sav_accounts)
    {
        if(account->get_name() == name)
        {
            return account;
        }
    }
    
    for(auto account : *check_accounts)
    {
        if(account->get_name() == name)
        {
            return account;
        }
    }
    
    for(auto account : *trust_accounts)
    {
        if(account->get_name() == name)
        {
            return account;
        }
    }
    
    std::cout << "\nSorry, Account " << name << " does not exist" << std::endl;
    return nullptr;
}

//Check Balance
void check_balance()
{
    Account *account = find_account();
    if(account != nullptr)
    {
        std::cout << "\nYour Balance is: " << *account << std::endl;
    }
}

//Deposit
void deposit()
{
    Account *account = find_account();
    if(account != nullptr)
    {
        double amount {};
        std::cout << "\nHow much would you like to deposit into your account? ";
        std::cin >> amount;
        *account += amount;
    }
}

//Withdraw
void withdraw ()
{
    Account *account = find_account();
    if(account != nullptr)
    {
        double amount {};
        std::cout << "\nHow much would you like to deposit into your account? ";
        std::cin >> amount;
        *account -= amount;
    }
}

//Go Back
void go_back()
{
    std::cout << "\nGoing Back to Menu" << std::endl;
}

//Other
void other ()
{
    std::cout << "\nEntered Selection is not Valid Please try again" << std::endl;
}

//Quit
void quit ()
{
    std::cout << "\nThank You and Goodbye!" << std::endl;
}