//Inheritance Challenge - Accounts

#include "InheritanceChallengeSavings.h"
#include "InheritanceChallengeUtil.h"
#include "InheritanceChallengeChecking.h"
#include "InheritanceChallengeTrust.h"
#include "InheritanceChallengeMenu.h"
#include <iostream>
#include <vector>

int main() {
    
    //Setting Precision to 2 decimal points
    std::cout.precision(2);
    std::cout << std::fixed;
    
    //Display Menu (---In Progress---)
    char selection {};
    
    do
    {
        menu();
        selection = selection_option();
        execute_choice(selection);
    }
    while (selection != 'Q');
    
    //Accounts
    std::vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000});
    accounts.push_back(Account {"Curly", 5000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    //Savings
    std::vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account {"Superman"});
    sav_accounts.push_back(Savings_Account {"Batman", 2000});
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    //Checking
    Checking_Account adrianne {"Adrianne", 5000.0};
    std::cout << adrianne << std::endl;
    adrianne.withdraw(500);
    std::cout << adrianne << std::endl;
    adrianne.withdraw(500);
    std::cout << adrianne << std::endl;
    adrianne.withdraw(5000.0);
    std::cout << adrianne << std::endl;
    
    //Trust
    Trust_Account brian ("Brian", 50.00);
    std::cout << brian << std::endl;
    brian.deposit(5000.0);
    std::cout << brian << std::endl;
    brian.deposit(1000.0);
    std::cout << brian << std::endl;
    
    brian.withdraw(1300);
    std::cout << brian << std::endl;
    brian.withdraw(1000);
    std::cout << brian << std::endl;
    brian.withdraw(1200);
    std::cout << brian << std::endl;
    brian.withdraw(1000);
    std::cout << brian << std::endl;
    brian.withdraw(500);
    std::cout << brian << std::endl;
    brian.withdraw(100);
    std::cout << brian << std::endl;
    
    //Checking
    std::vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account{});
    check_accounts.push_back(Checking_Account {"Wolf"});
    check_accounts.push_back(Checking_Account {"Dolphin", 2000});
    check_accounts.push_back(Checking_Account {"Tiger", 5000, 5.0});
    
    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);
    
    //Trust
    std::vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account {"Gryphon"});
    trust_accounts.push_back(Trust_Account {"Kirin", 2000});
    trust_accounts.push_back(Trust_Account {"Dragon", 5000, 5.0});
    
    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 2000);
    
    //Overloaded Operators
    Account dora {"Dora"};
    dora += 500.0;
    std::cout << dora << std::endl;
    dora -=600;
    dora -= 200;
    std::cout << dora << std::endl;
    
    Trust_Account diego {"Diego"};
    diego += 1000;
    std::cout << diego << std::endl;
    
    std::cout << std::endl;
    return 0;
}
