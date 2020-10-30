#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main()
{
    int T;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll arr[n][m];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }

        bool flag=true;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if( (i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==0) || (i==n-1 && j==m-1) )
                {
                    if(arr[i][j]>2)
                    {
                        flag=false;
                        break;
                    }
                    else
                    {
                        arr[i][j]=2;
                    }
                }
                else if(i==1 || j==0 || i==(n-1) || j==(m-1))
                {
                    if(arr[i][j]>3)
                    {
                        flag=false;
                        break;
                    }
                    else
                    {
                        arr[i][j]=3;
                    }
                }
                else
                {
                    if(arr[i][j]>3)
                    {
                        flag=true;
                        break;
                    }
                    else
                    {
                        arr[i][j]=4;
                    }

                }
            }
            if(flag==false)
                break;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m+2; j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
