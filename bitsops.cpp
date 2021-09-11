
#include <iostream>

int main()
{
    int i = 5;

    int k = i | ((1<<1));

    std::cout<<k<<std::endl;
    return 0;
}