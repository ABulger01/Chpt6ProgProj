#include <iostream>
#include <iomanip> 
using namespace std;

// This prgram will create a table showing the temperature in Celsius for Fahrenheit temperatures between 0 and 20.

// Function prototypes
double fahrenheitToCelsius(int fahrenheit);
void displayTable();

int main() {
    displayTable();
    return 0;
}
// This function will convert Fahrenheit to Celsius
double fahrenheitToCelsius(int fahrenheit) {
    return (fahrenheit - 32_) * 5.0 / 9.0;
}
// This function will display the table
void displayTable() {
    cout << "Fahrenheit\tCelsius\n";
    cout << "-------------------\n";
  "
}
}
