#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void reverse_primes(int primes_start_pointer[], int num_primes){
    int *primes_end_pointer = primes_start_pointer + num_primes - 1;
    int temp;
    while (primes_start_pointer <= primes_end_pointer){
        temp = *primes_start_pointer;
        *primes_start_pointer = *primes_end_pointer;
        *primes_end_pointer = temp;
        primes_start_pointer += 1;
        primes_end_pointer -= 1;
    }
}

int main(){

    int num_primes = 5;
    int *heap_memory_primes = new int[num_primes];

    heap_memory_primes[0] = 2;
    heap_memory_primes[1] = 3;
    heap_memory_primes[2] = 5;
    heap_memory_primes[3] = 7;
    heap_memory_primes[4] = 11;

    reverse_primes(heap_memory_primes, num_primes);

    for (int i = 0; i < num_primes; i++){
        cout << heap_memory_primes[i] << " ";
    }

    delete[] heap_memory_primes;

    bool true_or_false = false;
    std::cout << "\nbool = " << boolalpha << true_or_false << std::endl;

    return 0;
}