Assume that an integer and a pointer each takes 4 bytes. Also, assume that there is no alignment in objects. Predict the output following program.
#include<iostream>
using namespace std;
 
class Test
{
    static int x;
    int *ptr;
    int y;
};
 
int main()
{
    Test t;
    cout << sizeof(t) << " ";
    cout << sizeof(Test *);
}

Output:- 8 4
For a compiler where pointers take 4 bytes, the statement "sizeof(Test *)" returns 4 (size of the pointer ptr). 
The statement "sizeof(t)" returns 8.
Since static is not associated with each object of the class, we get (8 not 12).
