#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


class Person {
private:
    char* name;
    int* birthday;
public:
    Person(const char* a, int b = 0) {
        name = new char[strlen(a) + 1];
        strcpy(name, a);
        birthday = new int(b);
    }

    Person(const Person& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        birthday = new int(*other.birthday);
    }

    ~Person() {
        delete[] name;
        delete birthday;
    }

    void showPerson() {
        cout << name << " " << *birthday << endl;
    }
};

int main() {
    Person p1("ȫ�浿", 19990909);
    p1.showPerson();
    Person p2(p1);
    p2.showPerson();

    return 0;
}