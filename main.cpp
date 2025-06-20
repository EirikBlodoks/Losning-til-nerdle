#include "std_lib_facilities.h"
#include "variations.h"
#include "operations.h"


std::vector<int> siffer={2,4,7,8,11,80};
int desiredResult =193;

std::vector<std::vector<int>> permutationsOfNumbers;
std::vector<std::vector<int>> permutationsOfOperations;

std::vector<std::vector<int>> trueRealisationsNumbers;
std::vector<std::vector<int>> trueRealisationsOperations;
std::vector<int> operations={0,1,2,3};

int main(){
generatePermutationsForInts(siffer, permutationsOfNumbers);
generatePermutationsForOps(operations,permutationsOfOperations);

testAllPermutations(
    trueRealisationsNumbers, trueRealisationsOperations,
    permutationsOfNumbers, permutationsOfOperations,
    desiredResult
);

std::cout<<size(trueRealisationsNumbers)<<" "<< size(trueRealisationsOperations)<<endl<<
"size^, tall v"<<endl
<<trueRealisationsNumbers[0][0]<<", "<<trueRealisationsNumbers[0][1]<<", "<<trueRealisationsNumbers[0][2]<<", "<<trueRealisationsNumbers[0][3]<<", "<<trueRealisationsNumbers[0][4]<<", "<<
trueRealisationsNumbers[0][5]<<", "<<
endl<<
" operasjoner v"<<endl<<trueRealisationsOperations[0][0]<<trueRealisationsOperations[0][1]<<trueRealisationsOperations[0][2]<<trueRealisationsOperations[0][3]<<trueRealisationsOperations[0][4];


return 0;

};



// for (int i=0; i<5040;i++){
// std::cout<<permutationsOfNumbers[i][0]<<permutationsOfNumbers[i][1]<<permutationsOfNumbers[i][2]<<permutationsOfNumbers[i][3]<<permutationsOfNumbers[i][4]<<permutationsOfNumbers[i][5]<<permutationsOfNumbers[i][6]
// <<std::endl;
// }

// for (int i=0; i<1500;i++){
// std::cout<<permutationsOfOperations[i][0]<<permutationsOfOperations[i][1]<<permutationsOfOperations[i][2]<<permutationsOfOperations[i][3]<<permutationsOfOperations[i][4]<<permutationsOfOperations[i][5]<<
// std::endl;
// }

// bool test=testOperationsforOnePermutation(
//     {7,1,2,3,9,6,3}, 
//      {1,3,1,1,1,1},
//     -9);
// if(test){cout<<"nice";}
// else{cout<<"less nice";}
