#include "variations.h"
#pragma once
constexpr int factorial(int n){
    return (n == 0) ? 1 : n * factorial(n-1);
};

void generatePermutationsForInts(std::vector<int> numbers, std::vector<std::vector<int>>& permutationsOfNumbers) {
    permutationsOfNumbers.reserve(factorial(size(numbers)));
    std::sort(numbers.begin(), numbers.end());
    
    do {
        // Legger til hver nye variant til listen
        permutationsOfNumbers.push_back(numbers);
    } while (std::next_permutation(numbers.begin(), numbers.end()));
}

void generatePermutationsForOps(std::vector<int> digits, std::vector<std::vector<int>>& permutationsOfOperations ){
    vector<int> current(5); 
    permutationsOfOperations.reserve(pow(4,5));

    for (int i = 0; i < 4; i++) {    
        for (int j = 0; j < 4; j++) {   
            for (int k = 0; k < 4; k++) { 
                for (int l = 0; l < 4; l++) {  
                    for (int m = 0; m < 4; m++) {  
                        // for (int n = 0; n < 4; n++) {  
                            current[0] = digits[i];
                            current[1] = digits[j];
                            current[2] = digits[k];
                            current[3] = digits[l];
                            current[4] = digits[m];
                            // current[5] = digits[n];
                            permutationsOfOperations.push_back(current);
                        // }
                    }
                }
            }
        }
    }

    
}


/*
1234
1243
1324
1342
1423
1431

2134
2143
2324
2342
2413
2431

3124
3142
3214
3241
3412
3421

4123
4132
4213
4231
4312
4321

*/
