#include "MdImranGazi.h"

int main()
{
    int n;
    int m;
    vector<int> V;

    inputAll(n,m, V);
//
//    cout << endl;
//
//
//    oddAndEvenCheck(n);
//
//    maxAndMin(V);
//
//    sumOfArray(V);
//
//    digitSum(n);
//
//    primeNumber(n);
//
//    reverseAnArray(V);
//    checkPalindrome(n);
//
//    decimalToBinary(n);
    binaryToDecimal(n);

    decimalToOctal(n);

    decimalToHexadecimal(n);

    factorial(n);

    cout << "GCD = " << findGCD(n,m) << endl;

    cout << "LCM = " << findLCM(n, m) << endl;

    power(n,m);

    bubbleSort(V);

    return 0;
}
