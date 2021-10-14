#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

int main() {

    int n,k;

    cin>>n>>k;

    int a[n];

    int c=0;

    for(int i=0;i<n;i++)

    {

        cin>>a[i];

        if(a[i]>k)

        {

            c++;

        }

    }

    cout<<c<<endl;

    

    return 0;

}
