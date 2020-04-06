#include "Menu.h"
#include "InvalidEntryException.h"
#include <iostream>
#include <memory>
#include <string>

//Global Variables - vector of account pointers(Base Class Pointer)
std::vector<std::shared_ptr<Account> > all_accounts;

//Display Menu
void menu()
{
    std::cout << "\n======Menu===========" << std::endl;
    std::cout << "D - Deposit" << std::endl;
    std::cout << "B - Balance" << std::endl;
    std::cout << "W - Withdraw" << std::endl;
    std::cout << "C - Create Account" << std::endl;
    std::cout << "R - Remove Account" << std::endl;
    std::cout << "A - Display All Accounts" << std::endl;
    std::cout << "Q - Quit" << std::endl;
}

//Select Option from Main Menu
char selection_option()
{
    char selection {};
    std::cout << "\nPlease selection an option from the Menu: ";
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
        case 'R' : remove_account();
            break;
        case 'A' : display_all_accounts();
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
    std::unique_ptr<std::string> name = std::make_unique<std::string>();
    std::cout << "\nPlease enter Your Name for the Savings Account: ";
    std::cin.ignore();
    std::getline(std::cin, *name);
    
    if(find_name(*name))
    {
        std::cout << "\nAccount already exists for: " << *name << std::endl;
    }
    else
    {
        std::unique_ptr<double> amount = std::make_unique<double>();
        std::cout << "\nPlease enter the Amount you are opening the Account with: ";
        
        if(std::cin >> *amount)
        {
            std::shared_ptr<Account> sav_account = std::make_shared<Savings_Account>(*name, *amount);
            all_accounts.push_back(sav_account);
            std::cout << "\nCreated: " << *sav_account << std::endl;
        }
        else
        {
            std::cin.clear();
            throw InvalidEntryException{};
        }
    }
}

//Create Checking Account
void create_checking ()
{
    std::unique_ptr<std::string> name = std::make_unique<std::string>();
    std::cout << "\nPlease enter Your Name for the Checking Account: ";
    std::cin.ignore();
    std::getline(std::cin, *name);
    
    if(find_name(*name))
    {
        std::cout << "\nAccount already exists for: " << *name << std::endl;
    }
    else
    {
        std::unique_ptr<double> amount = std::make_unique<double>();
        std::cout << "\nPlease enter the Amount you are opening the Account with: ";
        
        if(std::cin >> *amount)
        {
            std::shared_ptr<Account> check_account = std::make_shared<Checking_Account>(*name, *amount);
            all_accounts.push_back(check_account);
            std::cout << "\nCreated: " << *check_account << std::endl;
        }
        else
        {
            std::cin.clear();
            throw InvalidEntryException{};
        }
    }
}

//Create Trust Account
void create_trust ()
{
    std::unique_ptr<std::string> name = std::make_unique<std::string>();
    std::cout << "\nPlease enter Your Name for the Trust Account: ";
    std::cin.ignore();
    std::getline(std::cin, *name);
    
    if(find_name(*name))
    {
        std::cout << "\nAccount already exists for: " << *name << std::endl;
    }
    else
    {
        std::unique_ptr<double> amount = std::make_unique<double>();
        std::cout << "\nPlease enter the Amount you are opening the Account with: ";
        
        if(std::cin >> *amount)
        {
            std::shared_ptr<Account> tru_account = std::make_shared<Trust_Account>(*name, *amount);
            all_accounts.push_back(tru_account);
            std::cout << "\nCreated: " << *tru_account << std::endl;
        }
        else
        {
            std::cin.clear();
            throw InvalidEntryException{};
        }
    }
}

//Find Account
std::shared_ptr<Account> find_account()
{
    std::unique_ptr<std::string> name = std::make_unique<std::string> ();
    std::cout << "\nEnter the account name that you want to find: ";
    std::cin.ignore();
    std::getline(std::cin, *name);
    
    for(const auto &account : all_accounts)
    {
        if(account->get_name() == *name)
        {
            return account;
        }
    }
    
    std::cout << "\nSorry, Account " << *name << " does not exist..." << std::endl;
    return nullptr;
}

//Find Name
bool find_name(std::string name)
{
    for(const auto &account : all_accounts)
    {
        if(name == account->get_name())
        {
            return true;
        }
    }
    return false;
}

//Check Balance
void check_balance()
{
    std::shared_ptr<Account> account = find_account();
    if(account != nullptr)
    {
        std::cout << "\nYour Balance is: " << *account << std::endl;
    }
}

//Deposit
void deposit()
{
    std::shared_ptr<Account> account = find_account();
    if(account != nullptr)
    {
        double amount {};
        std::cout << "\nHow much would you like to deposit into your account? ";
        std::cin >> amount;
        account->deposit(amount);
    }
}

//Withdraw
void withdraw ()
{
    std::shared_ptr<Account> account = find_account();
    if(account != nullptr)
    {
        double amount {};
        std::cout << "\nHow much would you like to withdraw from your account? ";
        std::cin >> amount;
        account->withdraw(amount);
    }
}

//Delete Account
void remove_account()
{
    std::shared_ptr<Account> account = find_account();
    if(account != nullptr)
    {
        for(size_t i {0}; i <= all_accounts.size(); i++)
        {
            if(all_accounts[i] == account)
            {
                std::cout << "\n" << account->get_name() << " has been deleted" << std::endl;
                all_accounts.erase(all_accounts.begin() + i);
            }
        }
    }
}

//Display All Active Accounts
void display_all_accounts()
{
    if(all_accounts.size() > 0)
    {
        std::cout << "\n=====All Active Accounts========== " << std::endl;
        for(const auto &account : all_accounts)
        {
            std::cout << *account << std::endl;
        }
    }
    else
    {
        std::cout << "\nNo Active Accounts to Display..." << std::endl;
    }
}

//Go Back
void go_back()
{
    std::cout << "\nGoing Back to Menu..." << std::endl;
}

//Other
void other ()
{
    std::cout << "\nEntered Selection is not Valid Please try again" << std::endl;
}

//Quit
void quit ()
{
    std::cout << "\nThank You and Goodbye!!!" << std::endl;
}