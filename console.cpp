#include "console.hpp"
#include <vector>

Console::Console()
{
    //set default parameters
    mPrompt = ">";
    mQuitConsole = false;
}

Console::~Console()
{

}

void Console::parse(std::string buf, char delim)
{
    //strip string out separated by delimiter and store in vector
    std::vector< std::string> words;

    while(!buf.empty())
    {
        //find first position where delimiter is found
        size_t pos = buf.find_first_of(delim, 0);

        //if no delimiter was found
        if(pos == std::string::npos)
        {
            //push the string to the list and break the loop
            words.push_back(buf);
            break;
        }

        //if delimiter was found, strip off first piece and store in list
        words.push_back( buf.substr(0, pos));
        buf.erase(0, pos+1);
    }

}

void Console::startConsole()
{

    while(!mQuitConsole)
    {
        //input buffer
        std::string buf;

        std::cout << mPrompt;

        //get user input
        std::getline(std::cin, buf);

        //parse input
        parse(buf);
    }

}
