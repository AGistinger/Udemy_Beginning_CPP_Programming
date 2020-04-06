//Polymorphism Challenge

#include "PolyPrint.h"
#include "PolyUtil.h"
#include "PolyMenu.h"
#include <iostream>
#include <vector>

int main() {
    
    //Display Menu
    char selection {};
    
    do
    {
        menu();
        selection = selection_option();
        execute_choice(selection);
    }
    while (selection != 'Q');
    
    return 0;
}
