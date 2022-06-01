#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    // int activitySelection(vector<int> start, vector<int> end, int n)
    // {
    //     vector<vector<int>>ans(n);
    //     for(int i=0;i<n;i++)
    //     {
    //         ans.push_back({start[i],end[i]});
    //     }
    //     sort(ans.begin(),ans.end());
    //     int i=0,j,count=1;
    //     for(j=1;j<n;j++)
    //     {
    //         if(ans[i].second<ans[j].first);
    //         {
    //             count++;
    //             i=j;
    //         }
    //     }
    //     return count;
    // }
    bool static comp(pair<int,int>a,pair<int,int>b)
   {
       if(a.second==b.second) return a.first<b.first;
       return a.second<b.second;
   }
   
   int activitySelection(vector<int> start, vector<int> end, int n)
   {
       vector<pair<int,int>>v(n);
       for(int i=0;i<n;i++)
       {
           v[i]={start[i],end[i]};
       }
       sort(v.begin(),v.end(),comp);
       int i=0;
       int j=1;
       int c=1;
       while(j<n)
       {
           if(v[i].second<v[j].first)
           {
               i=j;
               j++;
               c++;
           }
           else
           {
               j++;
           }
       }
       return c;
   }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
