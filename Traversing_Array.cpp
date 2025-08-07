// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 9C

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int arr[] = {10 , 20 , 30 , 40 , 50};
    int *pArr = &arr[0];
    
    for (int i = 0 ; i < 5 ; i++){
        cout << "\nAddress of element " << i+1 << " is " << pArr;
        cout << "\nValue of element " << i+1 << " is " << *pArr;
        pArr++;
    }   
} 

/*
OUTPUT:

Address of element 1 is 0x7fff35124830
Value of element 1 is 10
Address of element 2 is 0x7fff35124834
Value of element 2 is 20
Address of element 3 is 0x7fff35124838
Value of element 3 is 30
Address of element 4 is 0x7fff3512483c
Value of element 4 is 40
Address of element 5 is 0x7fff35124840
Value of element 5 is 50

=== Code Execution Successful ===
*/
