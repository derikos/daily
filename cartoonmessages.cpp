/* Class derived from abstract parent MessageCentral
 * Created to see how we implement virtual and pure virtual
 * functions in a derived class.
 */

#include "cartoonmessages.h"

CartoonMessages::CartoonMessages()
{

}

void CartoonMessages::startMessage()
{
   std::cout<< "CartoonMessages::startMessage()"<<std::endl
            << "Implementation of pure virtual function from parent Class"
            << std::endl;
}

void CartoonMessages::endMessage()
{
    std::cout << "CartoonMessages::endMessage()" << std::endl
              << "Implementation of pure virtual function from parent Class"
              << std::endl;
}

void CartoonMessages::mainMessage(std::string message)
{
    std::cout <<"this is the message from non pure virtual method" << std::endl;
}
