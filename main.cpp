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
double calculateGallonsOfPaint(double sqaureFeet);
double calculateLaborHours(double gallonsOfPaint);
double calculatePaintCost(double gallons, double pricePerGallon);
double calculateLaborCost(double laborHours);
void displayResults(double gallons, double hours, double paintCost, double laborCost);

