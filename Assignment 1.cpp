#include <iostream>

int averageEven(int n)
{
 if (n % 2 != 0) {
        printf("Invalid Input");
        return -1;
}

int sum = 0, count = 0;
while(n>=2){

    count++;
    sum += n;

    n = n - 2;
}
return sum / count;
}

int main(){
    int n=10000;
    printf("%d", averageEven(n))

return 0;
}