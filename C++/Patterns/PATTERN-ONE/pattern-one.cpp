// PATTERN PRINTING - TYPE ONE 
// *****
// *****
// *****
// *****
// *****

#include <iostream>

int main() {

    // Displaying the pattern 
    for( int rows=0; rows<5; rows++ ) {
        for( int columns=0; columns<5; columns++ ) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
