#include <iostream>
#include <algorithm>
using namespace std;

// This program will use data from judges combined with a specific method to calculate a contestant’s score.

// Function prototypes
void getJudgeScores(double scores[], int size);
double calculateScore(double scores[], int size);
double findLowest(double scores[], int size);
double findHighest(double scores[], int size);

const int Num_Judges = 5;

int main() {
    double scores[Num_Judges];
    getJudgeScores(scores, Num_Judges);
    double finalScore = calculateScore(scores, Num_Judges);
    cout << "The contestant's final score is: " << finalScore << endl;
    return 0;
}

// Function to validate and get judge scores
void getJudgeScores(double scores[], int size) {
    for (int i = 0; i < size; ++i) {
        do {
            cout << "Enter score for judge " << (i + 1) << "(0-10): ";
            cin >> scores[i];
            if (scores[i] < 0 || scores[i] > 10) {
                cout << "Invalid score. Please enter a score between 0 and 10> Try Again." << endl;
            }
        } while (scores[i] < 0 || scores[i] > 10); }