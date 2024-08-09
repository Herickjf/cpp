#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int j[4], dif;
    cin >> j[0] >> j[1] >> j[2] >> j[3];
    sort(j, j+4);
    dif = abs((j[0] + j[3]) - (j[1] + j[2])); 
    cout << dif << endl;
    return 0;
}
