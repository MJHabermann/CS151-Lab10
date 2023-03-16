#include "hello.h"
#include <iostream>



int main()
{
    Hello greetings1;
    std::string phrase = " Oh no I broke github!!!!!";

    greetings1.setGreeting(phrase);
    std::cout << greetings1.getGreeting() << std::endl;
    return 0;
}