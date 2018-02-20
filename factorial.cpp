// Example program
#include <iostream>
#include <string>
using namespace std;
class Factorial
{
    int n,s=1;
    public:
    void get()
    {
        cout<<"Enter the number:";
        cin>>n;
        }
        int factorial()
        {
            for(int i=1;i<=n;i++)
            {
                s=s*i;
                }
            return s;
            }
    };
int main()
{
Factorial f;
f.get();
  cout<<"Factorial of the number is,"<<f.factorial();
return 0;
}