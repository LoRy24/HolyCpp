#include <string>
#include <iostream>

using namespace std;

class BaseFunction {
    public:
        virtual bool checkFunc(string s);
        virtual void executeFunc(string s);
        virtual string getId();
};