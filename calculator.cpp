#include <iostream>
using namespace std;
int main()
{
    char choice;
    float n1,n2,result;
    char op;
    cout<<"Enter 1st Number:";
    cin>>n1;
    cout<<endl<<"Enter Operator(+,-,*,/)";
    cin>>op;
    cout<<"Enter Second Number";
    cin>>n2;
    switch(op)
    {
        case '+':
        {
            result=n1+n2;
            break;
        }
        case '-':
        {
            result=n1-n2;
            break;
        }
        case '*':
        {
            result=n1*n2;
            break;
        }
        case '/':
        {
            if(n2!=0)
            {
                result=n1/n2;
            }
            else
            {
                cout<<"Error division by zero";
                return 1;
                
            }
            break;
        }
        default:
        {
            cout<<"Invalid number:";
        }
    }
    cout<<endl<<"result="<<result;
}

