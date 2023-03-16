#include"hello.h"


void Hello::setGreeting(std::string g)
{
    greetings = g;
}

std::string Hello::getGreeting()
{
    return greetings;
}