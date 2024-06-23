#include <iostream>

// FUNCTION DEFINITION 
void all_pairs_of_elements( int X[], int size ) {
    std::cout << "ALL THE PAIRS OF THE ELEMENTS ARE : " << std::endl;

    for( int i=0; i<size; i++ ) {
        for( int j=0; j<size; j++ ) {
            std::cout << "(" << X[i] << "," << X[j] << ")" << std::endl;
        }
    }
}
int main() {

    int size;
    std::cout << "ENTER THE SIZE OF THE ARRAY :";
    std::cin >> size;
    
    // Array Initalization
    int X[size];
    
    for( int i=0; i<size; i++ ) {
        std::cin >> X[i];
    }

    all_pairs_of_elements( X, size );

    return 0;
}