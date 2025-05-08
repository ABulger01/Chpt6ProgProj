#include <iostream>
using namespace std;

// The progam will calculate and display the perimeter and area of a rectangle with information provided by the user.

// Function prototypes
double getPositiveInput(string prompt);
double calculatePerimeter(double length, double width);
double calculateArea(double length, double width);
bool askToContinue();

int main () {
    do { 
        // Get the length and width of the rectangle from the user
        double length = getPositiveInput("Enter the length of the rectangle: ");
        double width = getPositiveInput("Enter the width of the rectangle: ");

        // Calculate the perimeter and the area of the rectangle
        double perimeter = calculatePerimeter(length, width);
        double area = calculateArea(length, width);

      // Display the results
        cout << "The perimeter of the rectangle is: " << perimeter << endl;
        cout << "The area of the rectangle is: " << area << endl;

    } while (askToContinue());
    return 0;
}
    // Funtion to get positive input from the user
    double getPositiveInput(string promt) {
        double input;
        do {
            cout << prompt;
            cin >> input;

            if (input < 0) {
                cout << "Invalid input. Please enter a postive number." << endl;
            }
        } while (input < 0);
        return input;
    }  
    // Function to calculate the perimeter of the rectangle
  
          
        }
    }

}
    
}