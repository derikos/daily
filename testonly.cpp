#include "testonly.h"

TestOnly::TestOnly()
    : defaultMessage("Default Message")
{

}
/******  First interesting find *******
 * Tried to do this method that has an optional argument
 * To do this it must be initialized in the HEADER with a default
 * value,however it cannot be initialized with a member variable.
 * The below method works fine now for what it is.
 * See next 2 functions to see how the member variable
 * can be used as a default value in the case of optional parameters.
 */
void TestOnly::testCartoonMessages(std::string name)
{
   std::cout <<defaultMessage<<std::endl;
   std::cout <<name <<std::endl;
}

/* Functions to ilustrate the way to use a member
 * variable for a optional parameter dummy function.
 * In realitity the function is overridden.
 * This principle can be applied for functions with multiple
 * optional parameters and we want to use member variables.
 */
void TestOnly::userMessage()
{
    std::cout << defaultMessage <<std::endl;
}

void TestOnly::userMessage(std::string defaultMsg)
{
    std::cout << defaultMsg <<std::endl;
}


