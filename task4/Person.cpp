#include "Person.h"
#include<ctime>

void
Person::Show()const {
    cout << "\nFirst Name: " << itsMyFirstName << ", Last Name: " << itsMyLastName << endl;
}

void
Person::Set() {
    cout << "\nEnter the First Name: ";
    cin >> itsMyFirstName;
    cout << "\nEnter the last Name: ";
    cin >> itsMyLastName;
}

void
Gunslinger::Show()const {
    Person::Show();
    cout << "\nitsMyTime: " << itsMyTime << ", itsMyRifleNotches: " << itsMyRifleNotches << endl;
}

void
Gunslinger::Set() {
    Person::Set();
    cout << "\nEnter the time it takes a sniper to go on alert: ";
    cin >> itsMyTime;
    cout << "\nEnter the number of notches on the rifle: ";
    cin >> itsMyRifleNotches;
}

void
BadDude::Show() const{
    Gunslinger::Show();
    cout << "\nTime to taking out gun: " << Gdraw() << ", next drawn card: " << Cdraw() << endl;
}