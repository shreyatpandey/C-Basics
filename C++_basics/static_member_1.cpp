#include <iostream>
class Test
{
public:
    void fun();
};
static void Test::fun()   
{
    std::cout<<"fun() is staticn";
}
int main()
{
    Test::fun();   
    return 0;
}

Output:- Compile Error
Reason:- 
The above program fails in compilation and shows below error messages. 
[Error] cannot declare member function 'void Test::fun()' to have static linkage [-fpermissive] In function 'int main()': 
[Error] cannot call member function 'void Test::fun()' without object 
If the static function is to be defined outside the class then static keyword must be present in function declaration only 
not in the definition outside the class
