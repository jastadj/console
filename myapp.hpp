#ifndef CLASS_MYAPP
#define CLASS_MYAPP

#include "console.hpp"

class MyApp
{
private:

    Console myconsole;

public:
    MyApp();
    ~MyApp();

    void start();
};

#endif // CLASS_MYAPP
