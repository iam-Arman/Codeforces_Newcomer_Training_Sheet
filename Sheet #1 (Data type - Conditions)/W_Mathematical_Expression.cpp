                                          //   Bismillahir Rahmanir Rahim      //
                                         //      SHAHRIAR MAHMUD ARMAN        //
                                        //         AUTHOR : iamarman         //


#include<bits/stdc++.h>


                                                  //// MACROS ////

//---------------------------------------------------------------------------------------------------------------------------------|


# define ll long long                                                                                                              
# define test int test; cin>>test; while(test--)
# define rep(i,a,b) for(int i=a;i<b;i++)
# define rep_n(i,a,b) for(int i=a;i<=b;i++)
# define rep_rev(i,a,b) for(int i=b;a>=1;i--)
# define pb push_back
# define el "\n"
# define optimise   ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); cin.clear(); 
# define R0 return 0
# define all(v) v.begin(),v.end()
# define srt(vvv) sort(vvv.begin(),vvv.end())
# define sp " "
# define vii vector<int>
# define vll vector<long long>
# define yess cout<<"YES"<<el
# define noo cout<<"NO"<<el
# define PI 2*acos(0.0)
ll mod=10000000+7;


//----------------------------------------------------------------------------------------------------------------------------------|
                                             ///      NAMESPACE     ///

using namespace std;


                    /// THIS IS FOR GIVING INPUT AND GETTING OUTPUT IN A FILE INSTEAD OF TERMINAL OR CONSOLE   ///


inline void file() {

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
}

                                                    ///  CODE STARTS FROM HERE    ///




void solve()
{
  int a,b,c;
  char x,y;

  cin>>a>>x>>b>>y>>c;

  if(x=='+')
  {
    if(a+b==c)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<a+b<<endl;
  }

    if(x=='-')
  {
    if(a-b==c)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<a-b<<endl;
  }

  if(x=='*')
  {
    if(a*b==c)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<a*b<<endl;
  }

}

int main()
{
    optimise;
    file();
    solve();

}

//// PROBLEM LINK : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W