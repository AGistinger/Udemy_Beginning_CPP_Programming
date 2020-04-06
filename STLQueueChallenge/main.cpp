//The Standard Template Library (STL) - Stacks and Queues Challenge

#include <iostream>
#include <stack>
#include <queue>
#include <cctype>
#include <iomanip>
#include <string>

using namespace std;

//Returns a True/False value for the string that is passed in 
bool is_palindrome(const string &s)
{
    queue<char> forward_char {};
    stack<char> backward_char {};
    
    //Converts the string into alpha characters and adds to stack/queue
    for(const char &c : s)
    {
        if(isalpha(c))
        {
            forward_char.push(toupper(c));
            backward_char.push(toupper(c));
        }
    }
    
    //Compare each character and pop off stack/queue if the same
    while(!forward_char.empty() && !backward_char.empty())
    {
        if(forward_char.front() == backward_char.top())
        {
            forward_char.pop();
            backward_char.pop();
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
	vector<string> test_strings{"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++", 
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama", "This is a palindrome", "palindrome"};
        
    cout << boolalpha;
    cout << setw(8) << left << "Result" << "String" << endl;
    for(const string &s : test_strings)
    {
        cout << setw(8) << left << is_palindrome(s) << s << endl;
    }
    cout << endl;
	return 0;
}
