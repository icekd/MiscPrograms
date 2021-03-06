/* 
* description: a program that demonstrates selection sort with grades.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

double selectionSort(double num[], int numel);

const int MAX_ARRAYSIZE = 50;

int main()
{
	double grades[MAX_ARRAYSIZE];
	double score;
	int count = 0;

	do {
		cout << "Enter in a grade: ";
		cin >> score;
		if (score >= 0 && score <= 100) {
			grades[count] = score;
			count++;
		}
		else {
			if (score != -1) {
				cout << score << " is not a valid score, enter in a score between 0 <= score <= 100" << endl;
			}
		}
	} while (score != -1 && count < MAX_ARRAYSIZE);

	cout << "\nThe list of grades (unsorted): " << endl;
	
	for (int i = 0; i < count; i++) {
		cout << grades[i] << endl;
	}

	cout << "\nThe list of grades (sorted into ascending order): " << endl;

	selectionSort(grades, count);

	for (int i = 0; i < count; i++) {
		cout << grades[i] << endl;
	}

	cin.ignore(2);
    return 0;

}
double selectionSort(double num[], int numel)
{
	int i, j, minidx, moves = 0;
	double min, temp;

	for (i = 0; i < (numel - 1); i++)
	{
		min = num[i];   
		minidx = i;     
		for (j = i + 1; j < numel; j++)
		{
			if (num[j] < min)  
			{                   
				min = num[j];
				minidx = j;
			}
		}
		if (min < num[i])  
		{                  
			temp = num[i];
			num[i] = min;
			num[minidx] = temp;
			moves++;
		}
	}

	return moves;
}
