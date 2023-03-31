#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


class Person {
private:
    char* name;     // 동적할당을 하려면 포인터로 선언
    int* birthday;
    int* age;
    char* nick;
public:
    // 생성자
    Person(const char* a, const char* d, int b = 0, int c=0 ) {     // 기본 값이 없는 파라미터는 전부 왼쪽으로 몰아 넣어야 한다.
        name = new char[strlen(a) + 1]; // 필요한 크기만큼 동적 할당, 글자길이 + 1, 단일 변수를 동적으로 할당하기 위해 new를 사용
                    // strlen(a) + 1 인 이유는 Null character를 저장해야 하기 때문이다.
                    // 문자열은 그 길이를 고려하여 메모리를 동적으로 할당하고 strcpy를 사용해 문자열을 복사해야 한다.
        strcpy(name, a);                // 문자열은 이 과정이 꼭 필요하다.   a를 문자열 name이 가리키는 동적할당 메모리 공간에 복사하는 역할을 한다.
        birthday = new int(b);
        age = new int(c);
        nick = new char[strlen(d) + 1];
        strcpy(nick, d);
    }
    // 소멸자에서 동적할당 해제
    ~Person() {
        delete[] name;      // []를 붙인것과 안붙인것이 차이가 없음, 이유는??
        delete birthday;
        delete age;
        delete[] nick;
    }

    // 복사생성자에 동적할당, 생성자와 거의 비슷한 구조
    Person(const Person& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        birthday = new int(*other.birthday);
        age = new int(*other.age);

        nick = new char[strlen(other.nick) + 1];
        strcpy(nick, other.nick);
    }

    // 대입 연산자에 동적할당, 깊은 복사
    // 핵심은 대입연산자에 모든 복사를 얕은 복사가 아닌 깊은 복사를 수행하는 것에 있다.
    Person& operator=(const Person& other) {
        if (this == &other) {
            return *this;
        }
        delete[] name;
        name = new char[strlen(other.name) + 1];    // 여기서부터, 복사생성자와 비슷
        strcpy(name, other.name);
        birthday = new int(*other.birthday); // birthday 포인터가 가리키는 값을 복사, 위의 name처럼 깊은 복사 형태로 복사한다.
        age = new int(*other.age);

        delete[] nick;
        nick = new char[strlen(other.nick) + 1];
        strcpy(nick, other.nick);
        return *this;
    }

    void showPerson() {cout << name << " " << nick << " " << *birthday << "__" << *age << endl; }
};

int main() {
    Person p1("홍길동","맹구", 19990909, 20);
    p1.showPerson();
    Person p2(p1);
    p2.showPerson();
    Person p3 = p2;
    p3.showPerson();
    
    printf("========\n");
    Person p4("강감찬", "철수", 20001201, 30);
    p4.showPerson();
    p4 = p1;
    p4.showPerson();

    return 0;
}