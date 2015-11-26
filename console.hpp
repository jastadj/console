#ifndef CLASS_CONSOLE
#define CLASS_CONSOLE

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

class Console
{
private:

    std::string mPrompt;


public:
    Console();
    ~Console();

    std::vector<std::string> getConsoleInput();
    std::vector<std::string> parse(std::string buf, char delim = ' ');

    std::string getPrompt() { return mPrompt;}
    void setPrompt(std::string nprompt) { mPrompt = nprompt;}
};
#endif // CLASS_CONSOLE
