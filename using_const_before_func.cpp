#include <iostream>

class using_const_before_func
{
private:
    int i;
public:
    using_const_before_func(/* args */);

    void display() const  // const qualifier before function name --- this take a value but does not modify any member variables
    {
        std::cout << "Display function called. i = " << i << std::endl;
    }

    ~using_const_before_func();
};

using_const_before_func::using_const_before_func(/* args */)
{
}

using_const_before_func::~using_const_before_func()
{
}
