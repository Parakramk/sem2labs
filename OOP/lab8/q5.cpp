/*
5. You are building a simulation of a game involving characters and enemies.
You have a base class called Character and a derived class called Enemy.
Each class has a virtual destructor for proper memory cleanup.
Additionally, the Character class has a member function void displayInfo()
that prints "This is a character." and the Enemy class has an additional
member function void displayType() that prints "This is an enemy."
Create the necessary classes with appropriate member functions and
inheritance relationships. Write a program that demonstrates the concept
of virtual destructors by using an array of pointers to Character objects,
where some pointers point to Character instances and some to Enemy
instances. Use these pointers to call the displayInfo() and displayType()
functions for each object. Implement the destructors to display a message
when an object is destroyed.
*/
#include<iostream>
using namespace std;

class Character {
public:
    virtual ~Character() {
        cout << "Character Destroyed" << endl;
    }

    void displayInfo() {
        cout << "This is a Character" << endl;
    }
};

class Enemy : public Character {
public:
    virtual ~Enemy() {
        cout << "Enemy Destroyed" << endl;
    }

    void displayType() {
        cout << "This is an Enemy" << endl;
    }
};


int main() {
    Character* ch[3];

    ch[0] = new Character;
    ch[1] = new Enemy;
    ch[2] = new Enemy;

    for (int i = 0;i < 3;i++) {
        ch[i]->displayInfo();
        /*
        The ch[i] pointer can point to either a Character object or an Enemy object.
        The dynamic_cast operator will check to see if the pointer points to an Enemy object.
        If it does, then the dynamic_cast operator will return a pointer to the Enemy object.
        Otherwise, the dynamic_cast operator will return a null pointer.
        */
        Enemy* enemyPtr = dynamic_cast<Enemy*>(ch[i]);
        if (enemyPtr) {
            enemyPtr->displayType();
        }
    }

    for (int i = 0;i < 3;i++) {
        delete ch[i];
    }

    return 0;
}
/*
OUTPUT:
This is a Character
This is a Character
This is an Enemy
This is a Character
This is an Enemy
Character Destroyed
Enemy Destroyed
Character Destroyed
Enemy Destroyed
Character Destroyed
*/