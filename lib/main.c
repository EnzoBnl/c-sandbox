#include <stdio.h>

int facto(int n){
    if(n == 1 || n == 0) {
        return 1;
    }
    return n * facto(n - 1);
}


int main() {
   // printf() displays the string inside quotation
   int n = 10;
   printf("%d! = %d\n", n, facto(n));
   return 0;
}