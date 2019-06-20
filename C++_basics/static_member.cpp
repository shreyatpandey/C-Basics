/* Runs correctly */
include<bits/stdc++.h>
using namespace std;

class Cisco
{
    private:
        static int count;
    public:
    static void display()
    {
        cout<<"Cisco"<<endl;
    }
};
int Cisco::count=5;

int main()
{
    Cisco::display();
    return 0;
}
