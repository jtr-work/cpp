
#include <iostream>

struct Sample2
{
    int x,y;

    Sample2(int x, int y)
    : x(x) , y(y){};

    Sample2 add(const Sample2& other)const
    {
        return Sample2(x+other.x,y+other.y);
    }

    Sample2 operator+(const Sample2& other) const
    {
        return add(other);
    }

    int& operator[](unsigned int index)
    {
        return (index == 1) ? x:y;
    }
};
int main()
{

    Sample2 s1 {2,7};
    Sample2  s2 {4,5};

    Sample2 result = s1 + s2;
    result[2] = 4050;
    std::cout<<result.x<<std::endl;
    std::cout<<result.y<<std::endl;
    return 0;
}