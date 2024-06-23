// PATTERN PRINTING - TYPE TWO
// *
// * *
// * * * 
// * * * *
// * * * * *

#include <iostream>

int main() {

    // Displaying the pattern 
    for ( int rows=0; rows<5; rows++ ) {
        for ( int columns=0; columns<=rows; columns++ ) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
