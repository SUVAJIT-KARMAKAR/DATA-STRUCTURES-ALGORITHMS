// PATTERN PRINTING - TYPE FOUR 
// 1
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5


#include <iostream>

int main() {
    // Displaying the pattern 
    for ( int rows=1; rows<=5; rows++ ) {
        for ( int columns=1; columns<=rows; columns++ ) {
            std::cout << rows;
        }
        std::cout << std::endl;
    }
    return 0;
}