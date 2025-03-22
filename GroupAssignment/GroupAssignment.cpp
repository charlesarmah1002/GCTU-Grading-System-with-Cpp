#include <iostream>

using namespace std;

int main() {
	cout << "== GCTU GRADING SYSTEM ==" << endl;

	int NumberOfCourses;

	cout << "Enter the number of courses:" << endl;
	cin >> NumberOfCourses;

	int TotalScore = 0, TotalCredit = 0;

	for (int i = 1; i <= NumberOfCourses; i++)
	{
		cout << "What is your grade for course " << i << endl;

		int score;
		cin >> score;

		int CreditScore;
		cout << "What is your course credit for course " << i << endl;
		cin >> CreditScore;

		TotalCredit += CreditScore;

		if (score < 50) {
			cout << "Your grade is F" << endl;
		}
		else if (score >= 50 && score < 60) {
			cout << "Your grade is D" << endl;
		}
		else if (score >= 60 && score < 70) {
			cout << "Your grade is C" << endl;
		}
		else if (score >= 70 && score < 80) {
			cout << "Your grade is B" << endl;
		}
		else if (score >= 80 && score <= 100){
			cout << "Your grade is A" << endl;
		}
		else {
			cout << "Enter a proper score" << endl;
		}

		TotalScore += (score * CreditScore);
	}

	double SemesterAverage = TotalScore / TotalCredit;

	cout << "Your semester average is " << SemesterAverage << endl;
	cout << "Thank You For Using The GCTU Grading System" << endl;

	return 0;
}