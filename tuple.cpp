#include <iostream>
#include <tuple>
using namespace std;

int main(){
    // inicializando uma tuple e acessando os elementos
    tuple <int, string> person1(19, "Herick");
    tuple <int, string> person2(20, "Hericat");
    person1.swap(person2);
    cout << get<0>(person1) << ", " << get<1>(person1) << endl;
    cout << get<0>(person2) << ", " << get<1>(person2) << endl;

    tuple <int, string, bool> character;
    // inicializando com make_tuple()
    character = make_tuple(45, "John", false);

    cout << get<1>(character) << " is " << get<0>(character) 
         << " years old and he's " << (get<2>(character) ? "alive! :)\n":"dead! :(\n");

    // também é possível separar os valores de uma tupla em outras variaveis 
    // independentes usando tie()
    int charAge;
    string charName;
    bool isCharAlive;
    tie(charAge, charName, isCharAlive) = character;
    cout << charName<< " is " << charAge 
         << " years old and he's " << (isCharAlive ? "alive! :)\n":"dead! :(\n");

    // concatenando tuples
    tuple <int, char> t1(20, 'T');
    tuple <char, string> t2('C', "Hello!");
    // tuple <int, char, char, string> t3 = tuple_cat(t1, t2);
    auto t3 = tuple_cat(t1, t2); // faz a mesma coisa que a linha acima
    cout << get<0>(t3) << ", " << get<1>(t3) << ", " << get<2>(t3) << ", " << get<3>(t3);

    return 0;
}
