#include <iostream>
#include <cstdlib>
#include
using namespace std;
main()
{
    int max;
    max = 100; //set the upper bound to generate the random number
    srand(tm(0));
    cout << "The random number is: " << rand() % max;
}