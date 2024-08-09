#include <iostream>
#include <iomanip> // set precision

using namespace std;

int add(int, int);
int add(int, int, int);
int add(int, int, int, int);
int add(int, int, int, int, int);

int main(){

    cout << "\nsum = " << add(1, 2) << "\n";
    cout << "sum = " << add(1, 2, 3) << "\n";
    cout << "sum = " << add(1, 2, 3, 4) << "\n";
    cout << "sum = " << add(1, 2, 3, 4, 5) << "\n\n";

    double money = 123.154245;
    cout << "extra: \n\nYou have R$ " << setprecision(2) << fixed << money << endl << endl;
    return 0;
}

int add(int a , int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

int add(int a, int b, int c, int d){
    return a + b + c + d;
}

int add(int a, int b, int c, int d, int e){
    return a + b + c + d + e;
}