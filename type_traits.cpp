#include <iostream>
#include <type_traits>
#include <vector>
 
template <class T>
T f(T i)
{
    static_assert(std::is_integral<T>::value, "Integral required.");
    return i;
}

struct parent
{
    static constexpr bool boolvalue = false;
};
template <typename T>
struct is_vector1 { static constexpr bool value = false;};

template<typename T>
struct is_vector1<std::vector<T>> {static constexpr bool value = true;};

template <typename T>
struct is_vector : std::false_type {};

template <>
struct is_vector<std::vector<uint8_t> > : std::true_type {};

struct test_struct : parent {};

int main() 
{
    #if 0
    std::cout << std::boolalpha;
    std::cout << std::is_integral<A>::value << '\n';
    std::cout << std::is_integral<E>::value << '\n';
    std::cout << std::is_integral<float>::value << '\n';
    std::cout << std::is_integral<int>::value << '\n';
    std::cout << std::is_integral<const int>::value << '\n';
    std::cout << std::is_integral<bool>::value << '\n';
    std::cout << f(2) << '\n';
    #endif
    std::cout<<is_vector<std::vector<uint8_t>>::value<<std::endl;
    std::cout<<test_struct::boolvalue<<std::endl;
    std::cout<<is_vector1<std::vector<uint16_t>>::value<<std::endl;
}