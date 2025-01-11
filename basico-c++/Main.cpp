#include <iostream>
using namespace std;

class Human
{
public:
    Human() {
    };
    Human(string name)
    {
        this->name = name;
    };
    string name;
    int age;
    float height;
    float weight;

    void showInformations()
    {
        cout << name << "\n";
        cout << age << "\n";
        cout << height << "\n";
        cout << weight << "\n";
    };
};

int main(int argc, char const *argv[])
{
    Human me;
    me.name = "Marcos";
    me.age = 19;
    me.height = 1.85f;
    me.weight = 95.f;

    me.showInformations();
};
