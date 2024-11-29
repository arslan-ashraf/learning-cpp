#include <iostream>
#include <stdio.h>

using namespace std;

int add_primes(int primes[], int num_primes){
    int total = 0;
    for (int i = 0; i < num_primes; i++){
        total += primes[i];
    }
    return total;
}

int main(){

    int primes[] = { 2, 3, 5, 7, 11, 13, 17 };
    int num_primes = size(primes);

    int sum_of_primes = add_primes(primes, num_primes);

    cout << "sum of primes: " << sum_of_primes;

    return 0;
}