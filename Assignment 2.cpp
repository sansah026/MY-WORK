#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
        for (int i = 2; i < n/2; i++){
        if (n % i == 0){
            return false;
        }
        }
    return true;
}
int findPrimeSum(int n){
    int sumVAl = 0;
    for(float i = 2; i <= n; i++){
      if(isPrime(i))
         sumVal += i;
   }
   return sumVal;
}
int main(){
   int n = 25;
   cout<<"The sum of prime number between 1 to "<<n<<" is "<<findPrimeSum(n);
   return 0;
}