#include <iostream>
using namespace std;

int digit(int n)
{
   int r,q,count=0;
   for(int i=1;i<=n;i++)
    {
        q=i;
        while (q != 0)          //Separating each digit from the number
        {
            r=q%10;
            q=q/10;
            if(r==1)            //Comparing each digit to one for match
            {   count++;
            }
        }
    }
    return count;
}
int main() {
    int n;
    cout<<"Enter the limit";
    cin>>n;
    if(n<=109)
    cout<<"Total number of digit 1 appeared:"<<digit(n);
    else
    cout<<"Limit Exceeded";
    return 0;
}