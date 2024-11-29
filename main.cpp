#include <iostream>
#include <stdio.h>

using namespace std;

void reverse_primes(int *pointer_primes, int arr_size){
    int *end = pointer_primes + arr_size - 1;
    int temp;
    while (pointer_primes <= end){
        temp = *pointer_primes;
        *pointer_primes = *end;
        *end = temp;
        pointer_primes += 1;
        end -= 1;
    }
}

int main(){

    int primes[] = { 2, 3, 5, 7, 11, 13, 17 };
    int n = size(primes);
    int *pointer_primes = primes;

    reverse_primes(pointer_primes, n);

    for (int i = 0; i < n; i++){
        cout << primes[i] << " ";
    }

    return 0;
}