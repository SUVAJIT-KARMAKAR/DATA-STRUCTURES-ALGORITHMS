#include <iostream>

// FUNCTION DEFINITION 
void right_shifting_by_one( int X[], int size ) {
    int temporary = X[size-1];

    for( int i=size-1; i >= 1; i-- ) {
        X[i] = X[i-1];
    }

    X[0] = temporary;

    // Displaying the right-shifted array 
    std::cout << "RIGHT SHIFTED ARRAY : " << std::endl;
    for( int i=0; i<size; i++ ) {
        std::cout << X[i] << " ";
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

    right_shifting_by_one( X, size);

    return 0;
}