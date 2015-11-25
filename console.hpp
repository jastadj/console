#ifndef CLASS_CONSOLE
#define CLASS_CONSOLE

#include <cstdlib>
#include <iostream>
#include <string>

class Console
{
private:

    bool mQuitConsole;

    std::string mPrompt;


public:
    Console();
    ~Console();

    void startConsole();
    void parse(std::string buf, char delim = ' ');

    std::string getPrompt() { return mPrompt;}
    void setPrompt(std::string nprompt) { mPrompt = nprompt;}
};
#endif // CLASS_CONSOLE
