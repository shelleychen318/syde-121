#include <iostream>
#include <string>

using namespace std;

double input_grade();
string get_suffix(int x);
char percent_to_letter(double percent);

int main() {
    
    double percent_grade;
    char letter_grade;

    // Find the percent grade by averaging all the question grades (total/count)
    percent_grade = input_grade();
    letter_grade = percent_to_letter(percent_grade);

    cout << "The grade is " << letter_grade << endl;
    
  return 0;
}


// input handling, return percent grade
double input_grade()
{
    int num_questions = 0;
    double available_marks, achieved_marks, total_grade = 0;
    char cont_flag;
    do {
        // Keep track of the number of questions
        num_questions++;
        
       
        // For the current question, input the number of available marks and achieved marks
        cout << "Number of available marks for the " << num_questions << get_suffix(num_questions) << " question: ";
        cin >> available_marks;
        cout << "Number of achieved marks: ";
        cin >> achieved_marks;

        // Calculate the percent grade for the current question and add it to the total
        total_grade += achieved_marks / available_marks;

        // Loop if the user wants to continue
        cout << "Continue (y/n)? ";
        cin >> cont_flag;

        cout << endl;
    } while (cont_flag == 'y');

    // Find the percent grade by averaging all the question grades (total/count)
    return total_grade / num_questions;
}

// returns suffix
string get_suffix(int x)
{
     // Get ordinal suffix
    if (x % 10 == 1 && x % 100 != 11)
        return "st";
    else if (x % 10 == 2 && x % 100 != 12)
        return "nd";
    else if (x % 10 == 3 && x % 100 != 13)
        return "rd";
    else
        return "th";

}

// return letter grade
char percent_to_letter(double percent)
{
    // Convert the percent grade to a letter grade
    if (percent >= 0.8)
        return 'A';
    else if (percent >= 0.7)
        return 'B';
    else if (percent >= 0.6)
        return 'C';
    else if (percent >= 0.5)
        return 'D';
    else
        return 'F';
}