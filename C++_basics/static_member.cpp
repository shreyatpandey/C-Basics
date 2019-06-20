/* Runs correctly */
include<bits/stdc++.h>
using namespace std;

class Practice
{
    private:
        static int count;
        int count_1 ;
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
int Practice::count=5;
int Practice::count_1 = 2; //error here

int main()
{
    Practice::display();
    //Practice::display_1(); //error here, need an object of the class of practice
    return 0;
}
