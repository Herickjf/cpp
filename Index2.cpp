#include <iostream>
#include <ctime>

using namespace std;

void pseudoRandomNums();
void randomEventGenerator();
void guessingGame();

////////////////// MAIN //////////////////////
//////////////////////////////////////////////
int main(){
    //pseudo-random numbers = NOT truly random, but close
    // pseudoRandomNums();
    // randomEventGenerator();
    guessingGame();

    return 0;
}

//funcs
void pseudoRandomNums(){
    srand(time(NULL)); //initializate random with the calendar seed

    int num1 = (rand() % 6) + 1; // 6 is the biggest number we can have
    int num2 = (rand() % 6) + 1; // 6 is the biggest number we can have
    int num3 = (rand() % 6) + 1; // 6 is the biggest number we can have

    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
    std::cout << num3 << "\n";
}

void randomEventGenerator(){
    cout << "ALEATORY WEATHER GENERATOR\n\n";

    srand(time(0));
    int randNum = (rand() % 5) + 1;

    switch(randNum){
        case 1:
            cout << "-->I'ts rainning now!\n";
            break;
        case 2:
            cout << "-->I'ts sunny now!\n";
            break;
        case 3:
            cout << "-->I'ts foggy now!\n";
            break;
        case 4:
            cout << "-->I'ts cloudy now!\n"; 
            break;
        case 5:
            cout << "-->I'ts windy now!\n"; 
            break;
    }
    cout << endl;
}

void guessingGame(){
    srand(time(0));

    int number = (rand() % 100) + 1;
    int guess;

    cout << "\n\n*************** GUESSING GAME! ********************\n\n";
    cout << "Welcome to the guessing game, you'll give me guesses from 1 to 100 and I'll tell you if you're close or not and if you guessed correctly. Let's go!\n\n";
    
    while(true){
        cout << "Your guess: ";
        cin >> guess; 
        cin.clear(); // in case of invalid input

        int rem = number-guess;
        if(rem > 0)
            cout << "Too low... ";
        else if(rem < 0)
            cout << "Too high... ";
        else{
            cout << "You ate! The number is " << number << " !\n";
            return;
        }

        if(abs(rem) < 5)
            cout << "You're very close!\n\n";
        else if(abs(rem) < 10)
            cout << "You're close!\n\n";
        else
            cout << "\n\n";
    };
}
