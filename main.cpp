#include <iostream>
using namespace std;

int main() {
    // Read one whole-number count of teaspoons
    long long tsp;
    cout << "Enter the number of teaspoons: ";
    cin >> tsp;

    // Conversion constants
    const long long TSP_PER_TBSP = 3;
    const long long TBSP_PER_CUP = 16;
    const long long CUPS_PER_QUART = 4;

    const long long TSP_PER_CUP   = TSP_PER_TBSP * TBSP_PER_CUP;      // 48
    const long long TSP_PER_QUART = TSP_PER_CUP * CUPS_PER_QUART;     // 192

    // Break down into larger units (integer math; exact for 0..100000+)
    long long quarts = tsp / TSP_PER_QUART;
    tsp %= TSP_PER_QUART;

    long long cups = tsp / TSP_PER_CUP;
    tsp %= TSP_PER_CUP;

    long long tablespoons = tsp / TSP_PER_TBSP;
    tsp %= TSP_PER_TBSP;

    long long teaspoons = tsp;

    // EXACT output lines & order required by the assignment page
    cout << quarts      << " quart(s)\n";
    cout << cups        << " cup(s)\n";
    cout << tablespoons << " tablespoon(s)\n";
    cout << teaspoons   << " teaspoon(s)\n";

    return 0;
}
