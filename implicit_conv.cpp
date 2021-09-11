
#include <iostream>

class Entity
{
    public:
         Entity(int e):m_entity(e) // implicit type convertion happens here
        {
            std::cout<<"inside Constructor"<<std::endl;
        }

        int getE() const
        {
            return m_entity; 
        }
    private:
        int m_entity;
};

int main()
{
    Entity e1 = 2;// int to Entity converion takes place inside constructore
    //Entity e2(4);
    std::cout<<e1.getE()<<"\n";
    //std::cout<<e2.getE()<<"\n";

    return 0;
}