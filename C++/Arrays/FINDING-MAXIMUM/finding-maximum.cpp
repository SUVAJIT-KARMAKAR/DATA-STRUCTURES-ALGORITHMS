#include <iostream>

// FUNCTION DEFINITION
int find_maximum(int X[], int size) {
    int maximum_value = INT_MIN;

    for( int i=0; i<size; i++ ) {
        if ( X[i] > maximum_value ) {
            maximum_value = X[i];
        }
    }

    return maximum_value;
}
int main() {

    int size;
    int result;

    std::cout << "ENTER THE SIZE OF THE ARRAY : ";
    std::cin >> size;

    // Array Initialization 
    int X[size];

    for( int i=0; i<size; i++ ) {
        std::cin >> X[i];
    }

    result = find_maximum(X,size);
    std::cout << "THE MAXIMUM ELEMENT IN THE ARRAY : " << result << std::endl;

    return 0;
}