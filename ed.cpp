#include <iostream>
#include <iomanip>

using namespace std;

void fillArray();
void showArray();
void sortArray();

int main(){
    // showArray(); 
    // sortArray(); 
    fillArray();

    return 0;
}

void showArray(){
    string cars[] = {"Camaro", "Mustang", "Uno"};
    double prices[] = {50.500, 47.000, 5.200};

    for(int i = 0; i < sizeof(cars)/sizeof(string); i++)
        cout << cars[i] << " - U$" << setprecision(3) << fixed << prices[i] << endl;

    cout << "\nWith foreach:\n\n";
    for(string car : cars){
        cout << car << endl;
    }
}

void sortArray(){
    int nums[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(nums)/sizeof(int);

    cout << "List: ";
    for(int i = 0; i<size; i++){
        cout << nums[i] << (i==size-1 ? ".\n\n": ", ");
    }
    
    for(int i = 0; i<size-1; i++){
        for(int j = i+1; j<size; j++){
            if(nums[j] < nums[i]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    cout << "Sorted list: ";
    for(int i = 0; i<size; i++){
        cout << nums[i] << (i==size-1 ? ".\n\n": ", ");
    }
}

void fillArray(){
    // preencher a array com 0
    int nullArray[10];
    fill(nullArray, nullArray+10, 0);
    // fill(begin, end, value);

    for(int num : nullArray)
        cout << num << ' ';
}

