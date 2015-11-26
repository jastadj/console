#include "myapp.hpp"

MyApp::MyApp()
{

}

MyApp::~MyApp()
{

}

void MyApp::start()
{
    bool quit = false;

    while(!quit)
    {
        std::vector<std::string> userinput = myconsole.getConsoleInput();

        if(userinput.empty()) continue;
        else if(userinput[0] == "quit") quit = true;
    }
}
