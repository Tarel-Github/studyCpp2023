#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


class Person {
private:
    char* name;     // �����Ҵ��� �Ϸ��� �����ͷ� ����
    int* birthday;
    int* age;
    char* nick;
public:
    // ������
    Person(const char* a, const char* d, int b = 0, int c=0 ) {     // �⺻ ���� ���� �Ķ���ʹ� ���� �������� ���� �־�� �Ѵ�.
        name = new char[strlen(a) + 1]; // �ʿ��� ũ�⸸ŭ ���� �Ҵ�, ���ڱ��� + 1, ���� ������ �������� �Ҵ��ϱ� ���� new�� ���
                    // strlen(a) + 1 �� ������ Null character�� �����ؾ� �ϱ� �����̴�.
                    // ���ڿ��� �� ���̸� ����Ͽ� �޸𸮸� �������� �Ҵ��ϰ� strcpy�� ����� ���ڿ��� �����ؾ� �Ѵ�.
        strcpy(name, a);                // ���ڿ��� �� ������ �� �ʿ��ϴ�.   a�� ���ڿ� name�� ����Ű�� �����Ҵ� �޸� ������ �����ϴ� ������ �Ѵ�.
        birthday = new int(b);
        age = new int(c);
        nick = new char[strlen(d) + 1];
        strcpy(nick, d);
    }
    // �Ҹ��ڿ��� �����Ҵ� ����
    ~Person() {
        delete[] name;      // []�� ���ΰͰ� �Ⱥ��ΰ��� ���̰� ����, ������??
        delete birthday;
        delete age;
        delete[] nick;
    }

    // ��������ڿ� �����Ҵ�, �����ڿ� ���� ����� ����
    Person(const Person& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        birthday = new int(*other.birthday);
        age = new int(*other.age);

        nick = new char[strlen(other.nick) + 1];
        strcpy(nick, other.nick);
    }

    // ���� �����ڿ� �����Ҵ�, ���� ����
    // �ٽ��� ���Կ����ڿ� ��� ���縦 ���� ���簡 �ƴ� ���� ���縦 �����ϴ� �Ϳ� �ִ�.
    Person& operator=(const Person& other) {
        if (this == &other) {
            return *this;
        }
        delete[] name;
        name = new char[strlen(other.name) + 1];    // ���⼭����, ��������ڿ� ���
        strcpy(name, other.name);
        birthday = new int(*other.birthday); // birthday �����Ͱ� ����Ű�� ���� ����, ���� nameó�� ���� ���� ���·� �����Ѵ�.
        age = new int(*other.age);

        delete[] nick;
        nick = new char[strlen(other.nick) + 1];
        strcpy(nick, other.nick);
        return *this;
    }

    void showPerson() {cout << name << " " << nick << " " << *birthday << "__" << *age << endl; }
};

int main() {
    Person p1("ȫ�浿","�ͱ�", 19990909, 20);
    p1.showPerson();
    Person p2(p1);
    p2.showPerson();
    Person p3 = p2;
    p3.showPerson();
    
    printf("========\n");
    Person p4("������", "ö��", 20001201, 30);
    p4.showPerson();
    p4 = p1;
    p4.showPerson();

    return 0;
}