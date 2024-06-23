// PATTERN PRINTING - TYPE THREE
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5

#include <iostream>

int main() {
    // Displaying the pattern 
    for( int rows=1; rows<=5; rows++ ) {
        for ( int columns=1; columns<=rows; columns++ ) {
            std::cout << columns;
        }
        std::cout << std::endl;
    }
    return 0;
}