// Nested if Statement - Project 1
/*
 * ex)
 * if (expr1)
 *  if (expr2)
 *      statement1;
 *  else
 *      statement2;
 * 
 * If the expression is true then execute statement 1
 * If the expression is false then execute statement 2
 * 
 * ex)
 * if (score > 90)
 *  if (score > 95)
 *      cout << "A+;
 *  else
 *      cout << "A";
 * cout << "Sorry, no A";
 * 
 * ex)
 * if (score_frank != score_bill {
 *  if (score_frank > score_bill) {
 *      cout << "Frank Wins" << endl;
 *  } else {
 *      cout << "Bill Wins" << endl;
 *  }
 * } else {
 *     bout << "Looks like a tie" << endl;
 * }
 * 
 * */

#include <iostream>

using namespace std;

int main() {
    
    int score {};
    cout << "Enter your score on the exam (0-100): ";
    cin >> score;
    
    char letter_grade {};
    
    if(score >=0 && score <=100) {
        if (score >= 90) {
            letter_grade = 'A';
        } else if (score >= 80) {
            letter_grade = 'B';
        } else if (score >= 70) {
            letter_grade = 'C';
        } else if (score >= 60) {
            letter_grade = 'D';
        } else {
            letter_grade = 'F';
        }
        cout << "Your grade is: " << letter_grade << endl;
        if(letter_grade == 'F') {
            cout << "Sorry, you must repeat this class" << endl;
        } else {
            cout << "Congrats, you passed" << endl;
        }
    } else {
        cout << "Sorry, " << score << " is not in range" << endl;
    }
    
    cout <<endl;
    return 0;
}
