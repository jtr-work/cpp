
#include <iostream>

class One
{
    private:
        int k = 0;
    protected:
        int j = 9;
    public:

        One()
        {
            std::cout<<"inside constructor of One"<<std::endl;
        }
        void display_one()
        {
            std::cout<<"Display of One"<<std::endl;
        }

        friend void friend_fun();
};

void friend_fun()
{
    One* one = new One;
    one->k = 8;
    std::cout<<"inside friend function k = :"<<one->k<<std::endl;
}

class Two
{

    public:

        void display_two()
        {
            One* one = new One;
            one->display_one();
        }
};

int main()
{
    Two t1;
    t1.display_two();
    friend_fun();
    return 0;
}
