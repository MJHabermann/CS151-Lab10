
#include "hello.h"
#include <iostream>
#include "testClass.h"


int main()
{
    test t;
    t.setTest(21);

    std::cout << "Hello world from -" << t.getTest() << " pilots!" << std::endl;
    Hello greetings1;
    std::string phrase = " Oh no I broke github!!!!!";

    greetings1.setGreeting(phrase);
    std::cout << greetings1.getGreeting() << std::endl;
    return 0;
}