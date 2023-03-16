#include <iostream>
#include "testClass.h"

using namespace std;

int main()
{
    test t;
    t.setTest(21);

    cout << "Hello world from -" << t.getTest() << " pilots!" << endl;
    return 0;
}