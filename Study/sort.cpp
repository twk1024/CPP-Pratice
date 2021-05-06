#include<bits/stdc++.h>
using namespace std;
int main()
{

    /* 배열 정렬 sort 예시 by twk1024 */

    int a[10]={3,4,5,1,2,6,8,7,9,10};

    cout<<"Original Array Values:"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<endl;
    
    sort(a, a+10); // sort 1~10

    cout<<"Sorted Array Values:"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
