#ifndef MDIMRANGAZI_H
#define MDIMRANGAZI_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//INPUT FUNCTION

void inputAll(int &n,int m, vector<int> &V)
{
    cout << "Enter number  of n and m values: ";
    cin >> n>>m;
    cout << "Enter vector size : ";
   int size;
    cin >> size;
    V.resize(size);
     cout << "Enter " << size << " vector elements : ";

    for(int i = 0; i < size; i++){
        cin >> V[i];
    }
}

//1. ODD / EVEN

void oddAndEvenCheck(int n)
{
    if(n % 2 == 0){
        cout << "Your entered number is EVEN" << endl;
    }
    else{
        cout << "Your entered number is ODD" << endl;
    }
}

//2. MAX & MIN

void maxAndMin(vector<int> &V)
{
    if(V.empty()){
    cout << "Vector is empty!" << endl;
        return;
    }

    int maximum = V[0];
    int minimum = V[0];

for(int i = 1; i < V.size(); i++){

    if(V[i] > maximum){
            maximum = V[i];
        }

    if(V[i] < minimum){
            minimum = V[i];
        }
    }
 cout << "Maximum number = " << maximum << endl;
cout << "Minimum number = " << minimum << endl;
}

// 3. SUM OF ARRAY

void sumOfArray(vector<int> &V)
{
    int sum = 0;
    for(int i = 0; i < V.size(); i++){
        sum += V[i];
    }
cout << "Sum of array = " << sum << endl;
}

// 4. DIGIT SUM

void digitSum(int n)
{
    int digitSum = 0;
    n = abs(n);
while(n > 0){
    int digit = n % 10;
    digitSum += digit;
    n /= 10;
    }
cout << "Digit sum = " << digitSum << endl;
}

//5. PRIME NUMBER

void primeNumber(int n)
{
    if(n <= 1){
        cout << "Number is NON-PRIME" << endl;
        return;
    }

    bool isPrime = true;
for(int i = 2; i * i <= n; i++){

        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << "Number is PRIME" << endl;
    }
    else{
        cout << "Number is NON-PRIME" << endl;
    }
}

//6. REVERSE ARRAY

void reverseAnArray(vector<int> &V)
{
    int st = 0;
    int end = V.size() - 1;
while(st < end){

    swap(V[st], V[end]);
    st++;
    end--;
    }
cout << "Reversed array = ";

    for(int i = 0; i < V.size(); i++){
        cout << V[i] << " ";
    }
cout << endl;
}

//7. PALINDROME CHECK

void checkPalindrome(int n)
{
    if(n < 0){
        cout << n << " is NOT palindrome" << endl;
        return;
    }

    int originalNumber = n;
    long long reversedNum = 0;
while(n > 0){
int lastDigit = n % 10;
reversedNum = (reversedNum * 10) + lastDigit;
n /= 10;
    }
if(originalNumber == reversedNum){
        cout << originalNumber << " is palindrome" << endl;
    }
    else{
        cout << originalNumber << " is NOT palindrome" << endl;
    }
}

///8. DECIMAL TO BINARY

void decimalToBinary(int n)
{
    if(n == 0){
        cout << "Binary number = 0" << endl;
        return;
    }

    int binaryNum[32];
    int i = 0;
    while(n > 0){
        binaryNum[i] = n % 2;
        n /= 2;
        i++;
    }
    cout << "Binary number = ";
    for(int j = i - 1; j >= 0; j--){
        cout << binaryNum[j];
    }
    cout << endl;
}

//9. BINARY TO DECIMAL

void binaryToDecimal(long long n)
{
    if(n == 0){
        cout << "Decimal number = 0" << endl;
        return;
    }

    int decimalNum = 0;
    int power = 1;
    while(n > 0){
        int lastDigit = n % 10;
        if(lastDigit != 0 && lastDigit != 1){
            cout << "Invalid binary number!" << endl;
            return;
        }
        decimalNum += lastDigit * power;
        power *= 2;
        n /= 10;
    }
    cout << "Decimal number = " << decimalNum << endl;
}

//10. DECIMAL TO OCTAL

void decimalToOctal(int n)
{
    if(n == 0){
        cout << "Octal number = 0" << endl;
        return;
    }

    int octalNum = 0;
    int place = 1;
    while(n > 0){
        int rem = n % 8;
        octalNum += rem * place;
        place *= 10;
        n /= 8;
    }
    cout << "Octal number = " << octalNum << endl;
}

//11. DECIMAL TO HEXADECIMAL

void decimalToHexadecimal(int n)
{
    if(n == 0){
        cout << "Hexadecimal number = 0" << endl;
        return;
    }
    string hexNum = "";
    while(n > 0){
        int rem = n % 16;
        if(rem < 10){
            char hexChar = rem + '0';
            hexNum = hexChar + hexNum;
        }
        else{

            char hexChar = (rem - 10) + 'A';
            hexNum = hexChar + hexNum;
        }
        n /= 16;
    }
    cout << "Hexadecimal number = " << hexNum << endl;
}

//12. FACTORIAL

void factorial(int n)
{
    if(n < 0){
        cout << "Factorial not possible for negative numbers!" << endl;
        return;
    }

    long long fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    cout << "Factorial = " << fact << endl;
}

///13. GCD

int findGCD(int num1, int num2)
{
    while(num2 != 0){
        int rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }

    return num1;
}

///14. LCM

int findLCM(int num1, int num2)
{
    int gcd = findGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    return lcm;
}

///15. POWER

void power(int n, int p)
{
    long long ans = 1;
    for(int i = 0; i < p; i++){
        ans *= n;
    }
    cout << n << " power " << p << " = " << ans << endl;
}

///16. BUBBLE SORT

void bubbleSort(vector<int> &V)
{
    int n = V.size();
    for(int i = 0; i < n - 1; i++){
        bool isSwap = false;
        for(int j = 0; j < n - i - 1; j++){
            if(V[j] > V[j + 1]){
                swap(V[j], V[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            break;
        }
    }
    cout << "Sorted array = ";
    for(int i = 0; i < n; i++){
        cout << V[i] << " ";
    }
    cout << endl;
}

#endif
