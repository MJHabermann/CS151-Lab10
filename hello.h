/**
 * @file hello.h
 * @author Matthew Lewis (mdlewis@students.nic)
 * @brief .h file for class hello for lab10
 * @version 0.1
 * @date 2023-03-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef HELLO_H
#define HELLO_H

#include <string>


class Hello
{

    std::string greetings;
    public:
    void setGreeting (std::string );
    std::string getGreeting ();
};




#endif