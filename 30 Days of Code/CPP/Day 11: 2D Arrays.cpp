#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int sum1=0,sum2=INT_MIN;
    for(int i=0;i<arr.size()-2;i++)
    {
        //cout<<i<<"i"<<endl;
        //sum1=0;
        //for(int j=0;j+2<arr.length;j++)
        for(int j=0;j<arr.size()-2;j++)
        {
            //cout<<j<<"j"<<endl;
            sum1=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            //cout<<sum1<<"ij"<<endl;
            if(sum1>sum2){
                sum2=sum1;
                //sum1=0;
            }
        }
    }
    cout<<sum2;
    return 0;
}
