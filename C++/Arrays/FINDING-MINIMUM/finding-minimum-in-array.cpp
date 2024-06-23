#include <iostream>

// FUNCTION DEFINITION
int find_minimum(int X[], int size) {
    int minimum_value = INT_MAX;

    for( int i=0; i<size; i++ ) {
        if ( X[i] < minimum_value ) {
            minimum_value = X[i];
        }
    }

    return minimum_value;
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

    result = find_minimum(X,size);
    std::cout << "THE MINIMUM ELEMENT IN THE ARRAY IS " << result << std::endl;

    return 0;
}