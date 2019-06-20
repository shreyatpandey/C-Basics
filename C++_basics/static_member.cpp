/* Runs correctly */
include<bits/stdc++.h>
using namespace std;

class Practice
{
    private:
        static int count;
    public:
    static void display()
    {
        cout<<"practice"<<endl;
    }
    void display_1()
    {
     cout<<"practice_1"<<endl;   
    }
};
int Cisco::count=5;

int main()
{
    Practice::display();
    Practice::display_1(); //error here, need an object of the class of practice
    return 0;
}
