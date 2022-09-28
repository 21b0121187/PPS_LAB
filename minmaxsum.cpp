#include<iostream>
#include<climits>
using namespace std;
int main()
{   
    long maxsum=0;
    long minsum=0;
    long mini=INT_MAX;
    long maxi=INT_MIN;
    long array[5];
    for(int i=0;i<5;i++)
    {
    cin>>array[i];
    }
    for(int i=0;i<5;i++)
    {
        mini=min(mini,array[i]);
        maxi=max(maxi,array[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(array[i]!=mini)
        {
            maxsum=maxsum+array[i];
        }
        if(array[i]!=maxi)
        {
            minsum=minsum+array[i];
        }
        else if(array[i]==array[i+1])
        {
            minsum=minsum+array[i];
            maxsum=minsum;
        }
    }
    cout<<minsum<<" "<<maxsum;
return 0;
}
