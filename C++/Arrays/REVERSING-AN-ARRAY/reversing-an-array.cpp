#include <iostream>

// FUNCTION DEFINITION
void reverse_using_another_array( int X[], int size) {
    int reversed_X[size];

    int j = 0;
    for(int i=size-1; i>=0; i--) {
        reversed_X[j] = X[i];
        j++;
    }

    // Displaying the reversed array 
    std::cout << "THE REVERSED ARRAY : " << std::endl;
    for ( int i=0; i<size; i++ ) {
        std::cout << reversed_X[i] << " ";
    }
}

void reverse_using_two_pointer( int X[], int size ) {
    int start_of_array = 0;
    int end_of_array = size - 1;

    while( start_of_array <= end_of_array) {
        int temp = X[start_of_array];
        X[start_of_array] = X[end_of_array];
        X[end_of_array] = temp;

        start_of_array++;
        end_of_array--;
    }

    // Displaying the reversed array 
    std::cout << std::endl;
    std::cout << "THE REVERSED ARRAY USING TWO POINTER : ";
    for ( int i=0; i<size; i++ ) {
        std::cout << X[i] << " ";
    }
}
int main() {

    int size;
    
    std::cout << "ENTER THE SIZE OF THE ARRAY : ";
    std::cin >> size;

    // Array initializtion 
    int X[size];

    for( int i=0; i<size; i++ ) {
        std::cin >> X[i];
    }

    reverse_using_another_array(X, size);
    reverse_using_two_pointer(X, size);

    return 0;
}