#include <iostream>

// FUNCTION DEFINITION 
int count_occurances(int X[], int size, int target) {
    int occurance_count = 0;

    for ( int i=0; i<size; i++ ) {
        if ( X[i] == target ) {
            occurance_count++;
        }
    }
    return occurance_count;
}
int main() {

    int size;
    int target;
    int occurances;

    std::cout << "ENTER THE SIZE OF THE ARRAY : ";
    std::cin >> size; 

    std::cout << "ENTER THE TARGET ELEMENT : ";
    std::cin >> target;

    // Array initialization 
    int X[size];

    for( int i=0; i<size; i++ ) {
        std::cin >> X[i];
    }

    occurances = count_occurances(X,size,target);
    std::cout << "THE TOTAL OCCURANCES OF THE NUMBER : " << target << " IS : " << occurances << std::endl;

    return 0;
}