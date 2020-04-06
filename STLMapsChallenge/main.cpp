//The Standard Template Library (STL) - Associative Containers - Maps

#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;
/*
 * Used for Part 1
 * Display the word and count from the map<string, int>
 * */
void display_words(const map<string, int> &words)
{
    cout << setw(12) << left << "\nWord" << setw(7) << right << "Count" << endl;
    cout << "=============================" << endl;
    
    for(const pair<string, int> &element : words)
    {
        cout << setw(12) << left << element.first << setw(7) << right << element.second << endl;
    }
}

/*
 * Used for Part 2
 * Display the word and occurrences from the 
 * map<string, set<int>>
 * */
void display_words(const map<string, set<int>> &words)
{
    cout << setw(12) << left << "\nWord" << "Occurrences" << endl;
    cout << "======================================================" << endl;
    
    for(const pair<string, set<int>> &element : words)
    {
        cout << setw(12) << left << element.first << left << "[ ";
        
        for(const int &num : element.second)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
}

/*
 * This function removes periods, commas, semicolons, and colons in
 * a string and returns the clean version
 * */
string clean_string(const string &s)
{
    string result {};
    for(char c : s)
    {
        if(c == ',' || c == '.' || c == ';' || c == ':')
        {
            continue;
        }
        else
        {
            result += c;
        }
    }
    return result;
}

/*
 * Part 1
 * Process the file and builds a map of words and 
 * the number of times they occur in the file
 * */
void part1()
{
    map<string, int> words;
    string line {};
    string word {};
    ifstream in_file {"../words.txt"};
    
    if(in_file)
    {
        while(getline(in_file, line))
        {
            istringstream ss(line);
            while(ss >> word)
            {
                word = clean_string(word);
                //words[word]++;  //this does what the two lines below do
                words.insert(make_pair(word, 0));
                words.at(word)++;
            }
        }
        in_file.close();
        display_words(words);
    }
    else
    {
        cerr << "Error opening input file" << endl;
    }
}

/*
 * Part 2
 * Process the file and buils a map of words and
 * a set of line numbers in which the word appears
 * */
void part2()
{
    map<string, set<int>> words;
    string line {};
    int line_num {0};
    string word {};
    ifstream in_file {"../words.txt"};
    
    if(in_file)
    {
        while(getline(in_file, line))
        {
            istringstream ss(line);
            line_num++;
            while(ss >> word)
            {
                word = clean_string(word);
                words[word].insert(line_num);
            }
        }
        in_file.close();
        display_words(words);
    }
    else
    {
        cerr << "Error opening input file" << endl;
    }
}

int main()
{
	part1();
    part2();
    
	return 0;
}
