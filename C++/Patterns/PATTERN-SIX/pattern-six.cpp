// PATTERN PRINTING - TYPE SIX
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

// FORULA USED FOR PRINTING THE COLUMNS: (n-rows+1)

#include <iostream>

int main() {
    // Displaying the pattern
    for ( int rows=1; rows<=5; rows++ ) {
        for ( int columns=1; columns<=(5-rows+1); columns++ ) {
            std::cout << columns;
        }
        std::cout << std::endl;
    }
    return 0;
}