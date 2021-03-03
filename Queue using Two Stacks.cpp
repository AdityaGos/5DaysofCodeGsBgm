#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> v;
    vector<int>::iterator it;
    int t;
    cin>>t;
    while(t--)
    {
        int val; cin>>val;
         if(val==1)
            {
                int a; cin>>a;
                v.push_back(a);
            }
        else if(val==2)
        {
            it = v.begin();
            v.erase(it);
        }
        else cout<<v[0]<<"\n";  
    }
    return 0;
}
