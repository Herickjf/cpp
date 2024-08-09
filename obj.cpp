#include <iostream>

using namespace std;

class Animal{
    public:
        // public atribbutes
        string name;

        // public methods
        void eat(){
            cout << this->name << " is eating!\n";
        }
        void drink(){
            cout << this->name << " is drinking!\n";
        }
        void sleep(){
            cout << this->name << " is sleeping!\n";
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << age << " years old!" << endl;
        }

        // constructors
        Animal(){ }
        Animal(string name, int age){
            this->name = name;
            this->age = age;
        }

        // getters and setters
        void setAge(int age){
            if(age>0 && age<120){
                this->age = age;
            }else
                cout << "Age not setted, because it's out of bounds accepted!\n";
        }
        int getAge(){
            return this->age;
        }

    private: 
        // private atribbutes  
        int age;
    
};

class Human : public Animal{
    public:
        // public atribbutes
        string occupation;

        // public methods
        void display(){
            Animal::display();
            cout << "Ocupation: " << occupation << endl;
        }

        // constructors
        Human(){ }
        Human(string name, string occupation, int age) : Animal(name, age){
            this->occupation = occupation;
        }
};

class Cat : public Animal{
    public:
        // public methods
        void meaw(){
            cout << "Meaww!\n";
        }

        void display(){
            Animal::display();
            meaw();
        }
    
    //constructors
    Cat() : Animal(){ }
    Cat(string name, int age) : Animal(name, age){ }
};

int main(){
    Human human1;
    Human human2("John", "Professor", 40);
    Cat kitty("Tom", 1);

    human1.name = "Herick";
    human1.occupation = "Scientist";
    human1.setAge(19);

    human1.display();
    cout << '\n';
    human1.eat();
    human1.drink();
    human1.sleep();

    cout << '\n';
    cout << '\n';

    human2.display();
    cout << '\n';
    human2.eat();
    human2.drink();
    human2.sleep();

    cout << '\n';
    cout << '\n';

    kitty.display();

    return 0;
}