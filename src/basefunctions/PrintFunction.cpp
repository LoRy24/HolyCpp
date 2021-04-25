#include <iostream>
#include "BaseFunction.h"
#include <string>

using namespace std;

class PrintFunction: public BaseFunction {
    public:
        bool checkFunc(string s) 
        {
            return true;
        }

        void executeFunc(string s) 
        {
            
        }

        string getId() 
        {
            return "print";
        }
};