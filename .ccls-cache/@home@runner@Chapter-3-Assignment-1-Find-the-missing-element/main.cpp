#include <iostream>
using namespace std;
int Missingval(int a[],int n){
  int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}

int main() {
  int arr[]= {1,2,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int Miss = Missingval(arr,n);
  cout<<Miss; 
}