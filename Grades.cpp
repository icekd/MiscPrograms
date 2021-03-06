/*
* description: a program that demonstrates basic manipulations to grades 
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int MAX_ARRAYSIZE = 50;

int main()
{
	double grades[MAX_ARRAYSIZE];
	double score;
	double scoreSum = 0;
	double average;
	int count = 0;

	do {
		cout << "Enter in a grade: ";
		cin >> score;

		if (score >= 0 && score <= 100) {
			grades[count] = score;
			scoreSum += score;
			count++;
		} else {
			if (score != -1) {
				cout << score << " is not a valid score, enter in a score between 0 <= score <= 100" << endl;
			}
		}
	} while (score != -1 && count < MAX_ARRAYSIZE);

	cout << "\nThe sum is: " << scoreSum << endl;

	average = (scoreSum / count);

	cout <<"The average is: " << average << endl << endl;

	for (int i = 0; i < count; i++) {
		if (90 <= grades[i] && grades[i] <=  100) {
			if (grades[i] < average) {
				cout << "*";
			}
			cout << grades[i] << " A" << endl;
		} else if (80 <= grades[i] && grades[i] < 90) {
			if (grades[i] < average) {
				cout << "*";
			}
			cout << grades[i] << " B" << endl;
		} else if (70 <= grades[i] && grades[i] < 80) {
			if (grades[i] < average) {
				cout << "*";
			}
			cout << grades[i] << " C" << endl;
		} else if (60 <= grades[i] && grades[i] < 70) {
			if (grades[i] < average) {
				cout << "*";
			}
				cout<< grades[i] << " D" << endl;
		} else {
			if (grades[i] < average) {
				cout << "*";
			}
			cout << grades[i] << " F" << endl;
		}
	}

	cin.ignore(2);

    return 0;
}

