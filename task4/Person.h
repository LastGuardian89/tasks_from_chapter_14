#ifndef TASK4_PERSON_H
#define TASK4_PERSON_H


#include <iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Person {
private:
    string itsMyFirstName;
    string itsMyLastName;
public:
    Person(string firstName = "NoFirstName", string lastName = "NoLastName")
            : itsMyFirstName(firstName), itsMyLastName(lastName) {}
    virtual ~Person(){}

    virtual void Show()const;
    virtual void Set();
};

class Gunslinger: virtual public Person {
private:
    double itsMyTime;
    int itsMyRifleNotches;
public:

    Gunslinger(string firstName = "NoFirstName", string lastName = "NoLastName", double time = 0, int Rifle = 0)
            : Person(firstName, lastName), itsMyTime(time), itsMyRifleNotches(Rifle) {}
    ~Gunslinger() {}
    inline double Draw()const { return itsMyTime; }
    virtual void Show()const;
    virtual void Set();
};

class PokerPlayer : virtual public Person {
private:

public:

    PokerPlayer(string firstName = "NoFirstName", string lastName = "NoLastName")
            :Person(firstName, lastName) {}
    ~PokerPlayer(){}

    inline int Draw()const {return rand() % 52 + 1;}
};

class BadDude : public Gunslinger, public PokerPlayer {
private:

public:
    BadDude(string firstName = "NoFirstName", string lastName = "NoLastName", double time = 0, int Rifle = 0)
            :Person(firstName, lastName), Gunslinger(firstName, lastName, time, Rifle), PokerPlayer(firstName, lastName) {}
    ~BadDude() {}
    inline int Gdraw() const{ return rand() % 10 + 1; }
    inline int Cdraw() const { return rand() % 52 + 1; }
    void Show()const;
};


#endif //TASK4_PERSON_H
