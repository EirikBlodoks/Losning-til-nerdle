#include "variations.h"
#include "std_lib_facilities.h"

bool testOperationsforOnePermutation(
     std::vector<int> singlePermutation, std::vector<int> singleOperation,
    int desiredResult);

void testAllPermutations(
std::vector<std::vector<int>> &truePermsNumbers,         std::vector<std::vector<int>> &truePermsOperations, 
const std::vector<std::vector<int>> &permutationsOfNumbers, const std::vector<std::vector<int>> &permutationsOfOperations,
int desiredResult
);