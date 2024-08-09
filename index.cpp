#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>


using namespace std;
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
    int n1, n2;
}

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string str_t;
 using str_t = std::string;

int main(){
    /////////////////BASICS TYPES/////////////////////
    // Integers 
    int x = 5;
    // Doubles
    double grade = 9.5;
    // Char
    char dollarSign = '$';
    // Boolean
    bool yes = true;
    // String 
    string naame = "Herick";

    if(yes){
        cout << "\nFirst Chapter: \n";
        cout << "Hello, " << naame << ". Your grade is " << grade << ". Here's some money for you: "<< dollarSign << (float) x << "\n";
    }


    ///////////////INTRODUCING//////////////////
    ////////////////CONSTANTS//////////////////

    const double PI = 3.14159; // Read Only
    const int SPEEDLIGHT = 299792458; // Read Only
    const int WIDHT = 1920; // Read Only
    const int HEIGHT = 1080; // Read Only

    double radius = 10;
    double circumference = 2 * PI * radius;

    cout << "\nSecond Chapter: \n";
    cout << circumference << "cm\n" << SPEEDLIGHT << " Km/s\n" << WIDHT << " x " << HEIGHT << " px." << endl;
    

    /////////////////NAMESPACE//////////////////////
    // solution for name conflicts in large projects
    cout << "\nThird Chapter: \n";
    // int x = 1; // ERROR, because x was already defined above;
    // So, using only the keyword 'x', we have the local value, 
    // but using a namespace, we can use different values to the 
    // same name, changing only the namespace.
    // And we can also use the declaration "using namespace first",
    // for an example, to use that specific value of this variable in 
    // a specific escope or the entire file.

    cout << "X = " << x << endl;
    cout << "(first)X = " << first::x << endl;
    cout << "(Second)X = " << second::x << endl;


    //////////////////TYPEDEF AND TYPE ALIASES (using)/////////////////////
    cout << "\nForth Chapter\n";
    str_t myname = "Herick";
    cout << myname << endl;


    /////////////////ARITHMETIC OPERATORS///////////////////////
    // + - * /
    cout << "\nFifth Chapter\n";
    int students = 20;
    students++;
    cout << students << endl;
    students--;
    cout << students << endl;
    students*=2;
    cout << students << endl;
    students/=2;
    cout << students << endl;


    ////////////////TYPE CONVERSION/////////////////////////
    cout << "\nSixth Chapter\n";
    int n1 = 3.14;       // implicit 
    int n2 = (int) 3.14; // explicit (using datatype before the value)
    cout << "n1 = " << n1 << "; n2 = " << n2 << endl;


    ////////////////USER INPUT/////////////////////////
    cout << "\nSeventh Chapter\n";
    cout << "------Commented-----------\n\n";

    // string fullname;
    // string yourname;
    // cout << "What's your name?: ";
    // // reads till a space:
    // cin >> yourname; 
    // cout << "Hello, " << yourname << ".\n";   
    // cout << "What's your full name?: ";
    // // reads till the new line:
    // cin.ignore(); // ignora os '\n' que sobram de leituras de int/double
    // // #include <string>
    // getline(cin >> std::ws, fullname); // The ">> std::ws" cleans any white spaces or new line characters read before;
    // cout << "Hello, " << fullname << ".\n";   


    ////////// USEFULL MATHEMATICS RELATED FUNCTIONS ////////////////
    cout << "\nEighth Chapter\n";

    double w = -3.14, y = -4, z, j;

    z = std::max(w, y); // #include <algorithm>
    j = std::min(w, y); // #include <algorithm>

    cout <<"\nThe biggest is: " << z << endl;
    cout <<"\nThe smallest is: " << j << endl;

    j = pow(j, 2);

    cout <<"\nBiggest's squareroot is: " << sqrt(z) << endl;
    cout <<"\nSmallest's power of 2 is: " << j << endl;

    cout <<"\nBiggest rounded is: " << round(z) << endl;
    z = abs(z);
    cout <<"\nBiggest absolute value is: " << z << endl;

    // round(z) // round it normally
    // ceil(z)  // round it to the biggest integer
    // floor(z) // round ir to the smallest integer


    ///////////// HYPOTENUSE CALCULATOR /////////////////

    cout << "\nNineth Chapter\n";
    cout << "------Commented-----------\n\n";

    // double a, b, c;

    // cout << "\nEnter side A: ";
    // cin >> a; 
    // cout << "\nEnter side B: ";
    // cin >> b; 

    // c = sqrt((pow(a, 2) + pow(b, 2)));
    // cout << "\nHypotenuse equals " << c << endl;


    ///////////// IF STATEMENTS ////////////////////
    cout << "\nTenth Chapter\n";
    cout << "------Commented-----------\n\n";

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // if((age >= 18) && (age < 100))
    //     cout << "Welcome to the site!" << endl;
    // else if(age < 0)
    //     cout << "You haven't been born yet!" << endl;
    // else if(age >= 100)
    //     cout << "You are too old to enter this site!" << endl;
    // else
    //     cout << "You are not older enough to enter!" << endl;


    ////////////// SWITCHES //////////////////
    cout << "\nEleventh Chapter\n";
    cout << "------Commented-----------\n\n";

    // int month;
    // cout << "Enter a month(1-12): ";
    // cin >> month;

    // switch(month){
    //     case 1:
    //         cout << "It's January" << endl;
    //         break;
    //     case 2:
    //         cout << "It's February" << endl;
    //         break;
    //     case 3:
    //         cout << "It's March" << endl;
    //         break;
    //     case 4:
    //         cout << "It's April" << endl;
    //         break;
    //     case 5:
    //         cout << "It's May" << endl;
    //         break;
    //     case 6:
    //         cout << "It's June" << endl;
    //         break;
    //     case 7:
    //         cout << "It's July" << endl;
    //         break;
    //     case 8:
    //         cout << "It's August" << endl;
    //         break;
    //     case 9:
    //         cout << "It's September" << endl;
    //         break;
    //     case 10:
    //         cout << "It's October" << endl;
    //         break;
    //     case 11:
    //         cout << "It's November" << endl;
    //         break;
    //     case 12:
    //         cout << "It's December" << endl;
    //         break;
    //     default:
    //         cout << "This is not a month" << endl;
    // }


    /////////////// CALCULATOR //////////////////////
    cout << "\nEleventh Chapter\n";
    cout << "------Commented-----------\n\n";
    // cout << "***************** CALCULATOR ***********************\n";
    // char op;
    // double result = 0;

    // {
    //     using namespace second;
            
    //     cout << "Enter the first operand: ";
    //     cin >> n1;
    //     cout << "Enter the second operand: ";
    //     cin >> n2;
    //     cout << "Enter an operator (+, -, * or /): ";
    //     cin >> op;

    //     switch(op){
    //         case '+':
    //             result = n1 + n2;
    //             break;
    //         case '-':
    //             result = n1 - n2;
    //             break;
    //         case '*':
    //             result = n1 * n2;
    //             break;
    //         case '/':
    //             if(n2 != 0)
    //                 result = n1 / n2;
    //             break;
    //         default: 
    //             cout << "This is not an operator" << endl;
    //     }
    // }
    // cout << "Result = " << result << endl;
    // cout << "****************************************************\n";


    //////////////// TERNARY OPERATOR (?:) //////////////////////////
    cout << "\nTwelveth Chapter\n";
    cout << "------Commented-----------\n\n";

    // int grd = 75;
    // grd>=70 ? cout << "You passed!\n" : cout << "You failed!\n";

    // int number = 3;
    // number%2 ? cout << "ODD" : cout << "EVEN";

    // bool hungry = true;
    // //hungry ? cout << "You are hungry" : cout << "You are full";
    // cout << (hungry ? "You are hungry" : "You are full");


    //////////////// LOGICAL OPERATORS //////////////////////////
    cout << "\nThirteenth Chapter\n";
    cout << "------Commented-----------\n\n";

    // && - and 
    // || - or
    // ! - not


    //////////////// TEMPERATURE CONVERSION ///////////////////////
    cout << "\nForteenth Chapter\n";
    cout << "------Commented-----------\n\n";

    // double temp;
    // char unit;
    // cout << "*************** Temperature Conversion *****************\n";
    
    // cout << " - F = Fahreinheit\n";
    // cout << " - C = Celcius\n";
    // cout << "What unit would you like to convert to? (F or C) : ";
    // cin >> unit;

    // if(unit == 'F' || unit == 'f'){
    //     cout << "Enter the temperature in celcius: ";
    //     cin >> temp;
    //     temp = (1.8 * temp) + 32.0;
    //     cout << "Temperature is " << temp << "F";
    // }else if(unit == 'C' || unit == 'c'){
    //     cout << "Enter the temperature in Fahreinheit: ";
    //     cin >> temp;
    //     temp = (temp - 32.0) / 1.8; 
    //     cout << "Temperature is " << temp << "C";
    // }else{
    //     cout << "Please enter in only C or F\n";
    // }

    // cout << "\n********************************************************\n";


    //////////////// STRING METHODS ///////////////////////
    cout << "\nFifteenth Chapter\n";
    cout << "------Commented-----------\n\n";

    // string name;
    // cout << "Enter your name: ";
    // getline(cin, name);

    // cout << "Size: " << name.length() << endl;
    // cout << "Is Empty ? : " << name.empty() << endl;
    // // string.clear() - clean the string
    // cout << "Appending \"da Silva\" in your name: " << name.append(" da Silva") << endl;
    // cout << "First char: " << name.at(0) << endl;
    // cout << "Inserting a @ at the beggining of your name: " << name.insert(0, "@") << endl;
    // cout << "Finding the first space: " << name.find(' ') << endl;
    // name.erase(0, 1); // erase the chars in [x, y)
    // cout << "Erasing the first char: " << name << endl; 


    //////////////// LOOPS ///////////////////////
    cout << "\nSixteenth Chapter\n";
    cout << "------Commented-----------\n\n";

    // while(condition){
    //     instruction;
    // }

    // do{
    //     instruction;
    // }while(condition);

    // for(declaration; condition; iteration){
    //     instruction;
    // }


    //////////////// BREAK and CONTINUE ///////////////////////
    cout << "\nSeventeenth Chapter\n";
    cout << "------Commented-----------\n\n";

    // break - end an loop 
    // continue - end an especific iteration of an loop 


    //////////////// LOOPS OF LOOPS ///////////////////////
    cout << "\nEitghteenth Chapter\n";
    cout << "------Commented-----------\n\n";


    //////////////// LOOPS OF LOOPS ///////////////////////
    cout << "\nNineteenth Chapter\n";
    cout << "------Commented-----------\n\n";




    return 0;
}