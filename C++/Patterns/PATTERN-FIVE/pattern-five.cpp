// PATTERN PRINTING - TYPE FIVE 
// * * * * * 
// * * * * 
// * * * 
// * * 
// *

// FORMULA USED FOR PRINTING THE COLUMNS : (n-row+1)

#include <iostream>

int main() {
    // Displaying the pattern 
    for ( int rows=1; rows<=5; rows++ ) {
        for ( int columns=1; columns<=(5-rows+1); columns++ ) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}