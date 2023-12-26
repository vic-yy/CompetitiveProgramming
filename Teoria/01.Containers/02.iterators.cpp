#include <iostream>
#include <utility>


using namespace std;

void reverse_array(int *A, int N){
    int first = 0, last = N - 1;
    while (first < last) {
        swap(A[first], A[last]);
        first++;
        last--;
    }
}


void reverse_array_pointers(int *A, int N){
    int *first = A, * last = A + N - 1;
    while (first < last) {
        swap(* first, * last);
        first++;
        last--;
    }
}

int main(){
    
    const int size = 5;
    int myArray[size] = {1, 2, 3, 4, 5};

    std::cout << "Array original: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }

    // Chamando a função para inverter o array
    reverse_array(myArray, size);

    std::cout << "\nArray invertido: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Original: ";
    reverse_array_pointers(myArray, size);
    for (int i = 0; i < size; ++i) {
        std::cout  << myArray[i] << " ";
    }

    return 0;
    return 0;
}