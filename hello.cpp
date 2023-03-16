/**
 * @file hello.cpp
 * @author Matthew Lewis (mdlewis@students.nic)
 * @brief simple greetings cpp file for hello class
 * @version 0.1
 * @date 2023-03-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include"hello.h"


void Hello::setGreeting(std::string g)
{
    greetings = g;
}

std::string Hello::getGreeting()
{
    return greetings;
}