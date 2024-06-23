#include <iostream>

// FUNCTION DEFINITION
void extreme_priniting( int X[], int size ) {
    int start_of_array = 0;
    int end_of_array = size - 1;

    std::cout << "PERFORMING EXTREME PRINTING OF THE GIVEN ARRAY : " << std::endl;

    while ( start_of_array <= end_of_array ) {

        if ( start_of_array == end_of_array ) {
            std::cout << X[start_of_array] << std::endl;
            start_of_array++;
            break;
        }

        std::cout << X[start_of_array] << std::endl;
        std::cout << X[end_of_array] << std::endl;

        start_of_array++;
        end_of_array--;
    }
}
int main() {

    int size;
    std::cout << "ENTER THE SIZE OF THE ARRAY : ";
    std::cin >> size;

    // Array initialization
    int X[size];

    for( int i=0; i<size; i++ ) {
        std::cin >> X[i];
    }

    extreme_priniting( X, size );

    return 0;
}