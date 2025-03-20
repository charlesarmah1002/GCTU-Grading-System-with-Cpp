#include <iostream>

using namespace std;

int main()
{
    cout << "==GCTU GRADING SYSTEM==" << endl;

    int NumberOfCourses;

    cout << "Enter the number of courses you offer: " << endl;
    cin >> NumberOfCourses;

    int TotalScore = 0;

    for (int i = 1; i <= NumberOfCourses; i++)
    {   
        int score;
        cout << "What is your test score for course " << i << endl;

        cin >> score;

        if (score < 50) {
            cout << "Your grade for course " << i << " is F" << endl;
        }
        else if (score < 60) {
            cout << "Your grade for course " << i << " is D" << endl;
        }
        else if (score < 70) {
            cout << "Your grade for course " << i << " is C" << endl;
        }
        else if (score < 80) {
            cout << "Your grade for course " << i << " is B" << endl;
        }
        else if (score <= 100) {
            cout << "Your grade for course " << i << " is A" << endl;
        }
        else {
            cout << "Enter an appropraite score" << endl;
            break;
        }

        TotalScore += score;
    }

    cout << "Your total score is " << TotalScore << endl;

    double SemesterAverage;
    SemesterAverage = TotalScore / NumberOfCourses;

    cout << "Your semester score average is: " << SemesterAverage << endl;
    cout << "Thank You For Using The GCTU Grading System" << endl;
}
