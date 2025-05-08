#include <iostream>
#include <algorithm>
using namespace std;

// This program will use data from judges combined with a specific method to calculate a contestant’s score.

// Function prototypes
void getJudgeScores(double scores[], int size);
double calculateScore(double scores[], int size);
double findLowest(double scores[], int size);
