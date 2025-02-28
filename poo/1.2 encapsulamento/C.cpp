#include <iostream>
#include <cstring>
using namespace std;

class C
{
public:
    C(char *s = "", int i = 0, double d = 1)
    {
        strcpy(dadosMembro1, s);
        dadosMembro2 = i;
        dadosMembro3 = d;
    }
    void funcaoMembro1()
    {
        cout << dadosMembro1 << ' ' << dadosMembro2 << ' ' << dadosMembro3 << endl;
    }
    void funcaoMembro2(int i, char *s = "desconhecido")
    {
        dadosMembro2 = i;

        cout << i << " recebidoi de " << endl;
    }

protected:
    char dadosMembro1[20];
    int dadosMembro2;
    double dadosMembro3;
};

int main(int argc, char const *argv[])
{

    C objeto1("objeto1", 100, 2000), objeto2("objeto2"), objeto3;

    objeto1.funcaoMembro1();
}
