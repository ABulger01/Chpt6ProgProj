
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// This program will allow the user to enter the number of rooms that are to be painted and the price of the paint per gallon. 
// The program will then display the following data:
// The number of gallons of paint required
// The hours of labor required
// The cost of the paint
// The labor charges
// The total cost of the paint job

const double SquareFeetPerGallon = 110.0;
const double HoursPerGallon = 8.0;
const double LaborChargePerHour = 25.0;

// Function prototypes
int getNumberOfRooms();
double getPricePerGallon();
double getRoomSquareFeet(int roomNumber);
double calculateTotalSquareFeet(int numberOfRooms);
double calculateGallonsOfPaint(double squareFeet);
double calculateLaborHours(double gallonsOfPaint);
double calculatePaintCost(double gallons, double pricePerGallon);
double calculateLaborCost(double laborHours);
void displayResults(double gallons, double laborHours, double paintCost, double laborCost);

int main() {
    int numberOfRooms = getNumberOfRooms();
    double pricePerGallon = getPricePerGallon();
    double totalSquareFeet = calculateTotalSquareFeet(numberOfRooms);

    double gallons = calculateGallonsOfPaint(totalSquareFeet);
    double laborHours = calculateLaborHours(gallons);
    double paintCost = calculatePaintCost(gallons, pricePerGallon);
    double laborCost = calculateLaborCost(laborHours);

    displayResults(gallons, laborHours, paintCost, laborCost);

    return 0;
}

// Function to get the number of rooms
int getNumberOfRooms() {
    int numRooms;
    do {
        cout << "Enter the number of rooms to be painted: ";
        cin >> numRooms;
        if (numRooms < 1) {
            cout << "The number of rooms must be greater than 0. Try again.\n";
        }
    } while (numRooms < 1);
    return numRooms;
}

// Function to get the paint price per gallon
double getPricePerGallon() {
    double price;
    do {
        cout << "Enter the price of paint per gallon: $";
        cin >> price;
        if (price < 10.0)
            cout << "Price must be greater than $10.00. Try again.\n";
    } while (price < 10.0);
    return price;
}

// Function to get the square feet of each room
double getRoomSquareFeet(int roomNumber) {
    double squareFeet;
    do {
        cout << "Enter the square feet of room #" << roomNumber << ": ";
        cin >> squareFeet;
        if (squareFeet < 0)
            cout << "Square feet must be greater than 0. Try again\n";
    } while (squareFeet < 0);
    return squareFeet;
}

// Function to calculate the total square feet
double calculateTotalSquareFeet(int numberOfRooms) {
    double total = 0.0;
    for (int i = 1; i <= numberOfRooms; ++i) {
        total += getRoomSquareFeet(i);
    }
    return total;
}

// Function to calculate the gallons of paint
double calculateGallonsOfPaint(double squareFeet) {
    return ceil(squareFeet / SquareFeetPerGallon);
}

// Function to calculate the labor hours
double calculateLaborHours(double gallonsOfPaint) {
    return gallonsOfPaint * HoursPerGallon;
}

// Calculate the paint cost
double calculatePaintCost(double gallons, double pricePerGallon) {
    return gallons * pricePerGallon;
}

// Calculate the labor charges
double calculateLaborCost(double laborHours) {
    return laborHours * LaborChargePerHour;
}

// Display the results
void displayResults(double gallons, double laborHours, double paintCost, double laborCost) {
    double totalCost = paintCost + laborCost;
    cout << fixed << setprecision(2);
    cout << "\nPaint Job Estimate:\n";
    cout << "----------------------------------------\n";
    cout << "Gallons of paint required: " << gallons << endl;
    cout << "Hours of labor required: " << laborHours << endl;
    cout << "Cost of paint: $" << paintCost << endl;
    cout << "Labor charges: $" << laborCost << endl;
    cout << "Total cost of the paint job: $" << totalCost << endl;
}
