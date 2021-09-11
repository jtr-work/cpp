#include <iostream>

struct sample_struct
{
    int k = 3;
};

int main()
{
    sample_struct s1;
    std::cout<<s1.k;
    return 0;
}