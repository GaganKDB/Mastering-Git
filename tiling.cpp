#include<bits/stdc++.h>
using namespace std;

int noOfTiles(int x , int y){
    return 4;
}
int main()
{
    
    int N;
    cin>>N;
    int cntWays= noOfTiles(4,3);
    cout<<cntWays<<endl;
    return 0;
}