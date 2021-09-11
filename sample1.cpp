#include <iostream>

class Entity
{
    public:
        Entity()
        {
            std::cout<<"Constructed"<<std::endl;
        }
        ~Entity()
        {
            std::cout<<"Destructed"<<std::endl;
        }
};


int main()
{
    Entity e;
    //e = new Entity();
    return 0;
}