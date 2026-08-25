#include <iostream>
using namespace std;

int main() {
    string name;
    float maths, physics, chemistry, english, computer;
    float total, percentage;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks in Maths: ";
    cin >> maths;

    cout << "Enter marks in Physics: ";
    cin >> physics;

    cout << "Enter marks in Chemistry: ";
    cin >> chemistry;

    cout << "Enter marks in English: ";
    cin >> english;

    cout << "Enter marks in Computer: ";
    cin >> computer;

    total = maths + physics + chemistry + english + computer;
    percentage = total / 5;

    cout << "\n----- Student Result -----\n";
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A+" << endl;
    else if (percentage >= 80)
        cout << "Grade: A" << endl;
    else if (percentage >= 70)
        cout << "Grade: B" << endl;
    else if (percentage >= 60)
        cout << "Grade: C" << endl;
    else if (percentage >= 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    if (maths >= 40 && physics >= 40 && chemistry >= 40 &&
        english >= 40 && computer >= 40) {
        cout << "Result: PASS" << endl;
    } else {
        cout << "Result: FAIL" << endl;
        cout << "Reason: Minimum 40 marks required in every subject." << endl;
    }

    return 0;
}

    
    
