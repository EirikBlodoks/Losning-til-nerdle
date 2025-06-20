#include "operations.h"


#pragma once 

bool testOperationsforOnePermutation(
     std::vector<int> singlePermutation, std::vector<int> singleOperation,
    int desiredResult){
    
    int amountOfDigits = size(singlePermutation);
    int amountOfOps = amountOfDigits-1;
    float temp=singlePermutation[0];


    for (int i=0; i<=amountOfOps;i++){
        switch(singleOperation[i]) {
        case 0:
        temp+=singlePermutation[i+1];
        break;

        case 1:
        temp-=singlePermutation[i+1];        
        break;

        case 2:
        temp*=singlePermutation[i+1];                
        break;

        case 3:
        temp=temp/(singlePermutation[i+1]);        
        break;

        default:
        break;
        }
    }
// std::cout<<temp<<endl;
return (temp==desiredResult);

}

void testAllPermutations(
std::vector<std::vector<int>> &truePermsNumbers,         std::vector<std::vector<int>> &truePermsOperations, 
const std::vector<std::vector<int>> &permutationsOfNumbers, const std::vector<std::vector<int>> &permutationsOfOperations,
int desiredResult
){
for (int i=0; i<size(permutationsOfNumbers);i++){
    for (int j=0; j<size(permutationsOfOperations);j++){
        if(
            testOperationsforOnePermutation(
                permutationsOfNumbers[i],permutationsOfOperations[j],
                desiredResult)){
                    truePermsNumbers.emplace_back(permutationsOfNumbers[i]);
                    truePermsOperations.emplace_back(permutationsOfOperations[j]);
                }

    }
 }}