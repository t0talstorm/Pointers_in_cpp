// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 9B


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int arr[] = {10 , 20 , 30 , 40 , 50};
    
    
    int* pA1 = &arr[2];
    int* pA2 = &arr[4];
    int diff = *pA1 - *pA2;
    cout << "\nDifference is : " << diff;

  return 0;

}
/*
OUTPUT :
  Difference is : -20
*/
