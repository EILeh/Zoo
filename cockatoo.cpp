#include "cockatoo.hh"

Cockatoo::Cockatoo()
{

}

void Cockatoo::sing(std::ostream &output) const
{
    output << "Kee-ow kee-ow!" << std::endl;
}
