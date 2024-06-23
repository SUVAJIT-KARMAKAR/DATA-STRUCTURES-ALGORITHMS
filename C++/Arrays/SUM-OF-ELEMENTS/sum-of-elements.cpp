#include <iostream>

// FUNCTION DEFINITION 
int sum_of_elements(int X[], int size) {
    int sum = 0;

    for( int i=0; i<size; i++ ) {
        sum += X[i];
    }

    return sum;
}

int main() {
    int size;
    int result;

    std::cout << "ENTER THE SIZE OF THE ARRAY : ";
    std::cin >> size;

    // Array Initialization 
    int X[size];
    for( int i=0; i<size; i++) {
        std::cin >> X[i];
    }

    result = sum_of_elements(X, size);
    std::cout << "THE SUM OF THE ARRAY ELEMENTS : " << result << std::endl;
}