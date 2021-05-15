#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* 
      문제이름: 햄버거 분배
      문제: https://koi.or.kr/assets/koi/2020/1/problems/m1-problems.pdf 
    */

    int n,k; // 식탁의 길이, 햄버거를 선택가능한 거리
    cin>>n>>k;

    char a[n+1];
    int b[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; // H(amburger) or P(eople)
        
        if(a[i]=='H')
        {
            b[i]=1;
        }else if(a[i]=='P')
        {
            b[i]=0;
        }
    }

    int cnt=0;
        
    for(int j=0;j<n;j++)
    {
        if(b[j]==0) // 현재 순서가 사람일 경우
        {
            for(int f=j-k;f<=j+k;f++) // <<
            {
                if(j!=f)
                {
                    if(b[f]==1) // 현재 순서가 햄버거일 경우
                    {
                        b[f]=3; // 햄버거를 먹는다 (3)
                        cnt++;
                        break;
                    }
                }       
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}
