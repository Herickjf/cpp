#include <iostream>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(b - a == c - b){
        std::cout << "YES\n";
    }else{
        std::cout << "NO\n";
    }

    return 0;
}