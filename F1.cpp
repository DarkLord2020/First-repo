#include<bits/stdc++.h>
using namespace std;
int i;
void solve()
{
    int n;
        cin>>n;
        string st;
        cin>>st;
        int tempA=0;
            int tempB=0;
            for(int j=0;j<st.length();j++){
                if(st.at(j)=='B'){
                     tempB=tempB+1;
                }
                else{
                    tempA=tempA+1;

                }
            }
            if(abs(tempA-tempB)==1){
                cout<<"Case #"<<i<<": "<<"Y"<<endl;
            }
            else{
                cout<<"Case #"<<i<<": "<<"N"<<endl;
            }

}
int main()
{

 int t=0;
    cin>>t;
    for (i = 1; i <=t; i++)
    {
        solve();
    }
   
 return 0;
}