
#include <iostream>

class Entity
{
    public:
        Entity(int a, int b):a(a),b(b){};
        int getResult() const
        {
            m_sum+=3;
            return m_sum;
        }
        void sum()
        {
            m_sum = a + b;
        }
    private:
        int a,b;
        mutable int m_sum;
};

int main()
{
    Entity e(2,3);
    e.sum();
    std::cout<<e.getResult()<<std::endl;
    return 0;
}