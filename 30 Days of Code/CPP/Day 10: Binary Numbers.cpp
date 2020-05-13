#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int remainder,count1=0,count2=0;
    while(n>0)
    {
        remainder=n%2;
        n/=2;
        if(remainder==1)
        {
            ++count1;
            if(count1>=count2)  count2=count1;
        }
        else    count1=0;
        /*
        if(remainder==1)    ++count1;
        else    count1=0;
        if(count1>=count2)  count2=count1;
        */
    }
    cout<<count2;
    return 0;
}
