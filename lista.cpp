#include <iostream>

using namespace std;

int isPalind(unsigned int*, int);

int main(){
    int n, i;
    cin >> n;
    unsigned int list[n];

    for(i = 0; isPalind(list, n)+1 ; i++){
        
    }

    return 0;
}

int isPalind(unsigned int* list, int n){
    int i;
    for(i = 0; i <= n/2; i++){
        if(list[i] != list[n-i])
            return i;
    }
    return -1;
}