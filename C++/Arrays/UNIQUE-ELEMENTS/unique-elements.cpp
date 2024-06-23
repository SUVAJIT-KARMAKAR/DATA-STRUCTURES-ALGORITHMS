#include <iostream>

// FUNCTION DEFINITION
// USING THE XOR OPERATOR 
int unique_element_using_xor( int X[], int size ) {
    int xor_value = 0;

    for( int i=0; i<size; i++ ) {
        xor_value = xor_value ^ X[i];
    }

    return xor_value;
}
int main() {

    int size;
    int result;

    std::cout << "ENTER THE SIZE OF THE ARRAY : ";
    std::cin >> size;

    // Array initialization 
    int X[size];

    for( int i=0; i<size; i++ ) {
        std::cin >> X[i];
    }

    result = unique_element_using_xor( X, size );
    std::cout << "THE UNIQUE ELEMENT IS : " << result << std::endl;

    return 0;
}