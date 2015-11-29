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


    //heres an example of how to use the console class to get and parse console data

    while(!quit)
    {
        std::vector<std::string> userinput = myconsole.getConsoleInput();

        if(userinput.empty()) continue;
        else if(userinput[0] == "quit") quit = true;
    }
}
