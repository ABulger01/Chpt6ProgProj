#include <iostream>
#include <string>
using namespace std;

// This program will determines which geographic regions within a major city (north, south, east, west, and central) had the fewest reported automobile accidents last year.

// Function protoypes
int getAccidents(string region);
void findLowest(int north, int south, int east, int west, int central);

int main() {
  // Get accidents for each region
  int north = getAccidents("North");
  int south = getAccidents("South");
  int west = getAccidents("West");
  int east = getAccidents("East");
  int central = getAccidents("Central");

  // Find the region with the fewest accidents
  findLowest(north, south, east, west, central);
  return 0;

}
// Function to get accidents for each region
int getAccidents(string region) {
  int accidents;
  do {
    cout << "Enter the number of automobile accidents reported in the " << region << " region during the last year: ";
    cin >> accidents;
    if (accidents < 0) {
      cout << "The number of accidents cannot be negative. Please try again.\n";
    }
  }
}
}
