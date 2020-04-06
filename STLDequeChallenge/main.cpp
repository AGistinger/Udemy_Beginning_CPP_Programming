//The Standard Template Library (STL) - Deque Challenge

#include <iostream>
#include <deque>
#include <algorithm>
#include <cctype>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

/* **************************************************************************
 * (Instructors Solution)
 * bool is_palindrome(const std::string &s)
 * {
 *      std::deque<char> d;
 * 
 *      for(char c : s)
 *      {
 *          if(std::isalpha(c))
 *              d.push_back(std::toupper(c));
 *      }
 *      
 *      char c1{};
 *      char c2{};
 * 
 *      while(d.size(() > 1)
 *      {
 *          c1 = d.front();
 *          c2 = d.back();
 *          d.pop_front();
 *          d.pop_back();
 *          if(c1 != c2)
 *              return false;
 *      }
 *      return true;
 * }
 * **************************************************************************/
 
//Function Prototypes
bool is_palindrome(const string &s);
deque<char> is_alpha(const string &s);

//Determines if a String is a Palindrome
bool is_palindrome(const string &s)
{
    deque<char> forward_characters = is_alpha(s);
    deque<char> backward_characters {};
    copy(forward_characters.begin(), forward_characters.end(), front_inserter(backward_characters));
    
    if(forward_characters == backward_characters)
    {
        return true;
    }
    return false;
}

//Converts the string to a deque of characters (removes non-letter characters)
deque<char> is_alpha(const string &s)
{
    deque<char> string_convert {};
    for(const char &c : s)
    {
        if(isalpha(c))
        {
            string_convert.push_back(toupper(c));
        }
    }
    return string_convert;
}

int main()
{
	vector<string> test_strings {"a", "aa", "aba", "abba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++", 
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome"};
    
    cout << boolalpha;
    cout << setw(8) << left << "Result" << "String" << endl;
    
    for(const string &s : test_strings)
    {
        cout << setw(8) << left << is_palindrome(s) << s << endl;
    }
    
    cout << endl;
	return 0;
}
