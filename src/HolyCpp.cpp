#include <iostream>

using namespace std;

void readCode(string code);
void action(string codeString);

int main(int argc, char* argv[]) 
{
    if (argc < 2) {
        cout << "Invalid HolyCpp syntax!\n";
        return -0x2;
    }

    if (string(argv[1]) == "--console") {
        cout << "Console started (Fake, Debug msg)\n";
        return 0x0;
    }
    
    return -0x1;
}

void readCode(string code) 
{

}

void action(string codeString)
{

}