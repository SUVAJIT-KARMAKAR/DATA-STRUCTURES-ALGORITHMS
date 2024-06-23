#include <iostream>

// FUNCTION DEFINITION 
void count_one_zero(int X[], int size) {
    int count_one = 0;
    int count_zero = 0;

    for ( int i=0; i<size; i++ ) {
        if ( X[i] == 0 ) {
            count_zero++;
        } else if ( X[i] == 1 ) {
            count_one++;
        } else {
            continue;
        }
    }

    std::cout << "THE NUMER OF ZEROS IN THE ARRAY IS/ARE : " << count_zero << std::endl;
    std::cout << "THE NUMBER OF ONES IN THE ARRAY IS/ARE : " << count_one << std::endl;

}
int main() {

    int size;
    std::cout << "ENTER THE SIZE OF THE ARRAY : ";
    std::cin >> size;

    // Array initialization 
    int X[size];

    for(int i=0; i<size; i++) {
        std::cin >> X[i];
    }

    count_one_zero(X, size);

    return 0;
}