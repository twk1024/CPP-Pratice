#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    /* 
      문제이름: 다이어트
      문제: https://koi.or.kr/assets/koi/2020/1/problems/m1-problems.pdf 
    */
    
    int n; // 식재료의 개수
    cin>>n;

    int a,b,c,d; // 최소 영양성분
    cin>>a>>b>>c>>d;

    int o[n], p[n], f[n], s[n], v[n], cst[n]; // 재료 순서, 단백질, 지방, 탄수화물, 비타민, 가격
    for(int i=0;i<n;i++)
    {
        o[i]=i;
        cin>>p[i]>>f[i]>>s[i]>>v[i]>>cst[i];
    }


    int leastcost=1000, cost=0, result[50]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                cost=cst[i]+cst[j];
                if(p[i]+p[j] > a && f[i]+f[j] > b && s[i]+s[j] > c && v[i]+v[j] > d)
                {
                    if(cost<leastcost)
                    {
                        leastcost=cost;
                        result[0]=i+1;
                        result[1]=j+1;
                        sort(result, result+2);
                        break;
                    }
                }


                for(int q=0;q<n;q++)
                {
                    if(q!=j)
                    {
                        cost=cost+cst[q];
                        if(p[i]+p[j]+p[q] > a && f[i]+f[j]+f[q] > b && s[i]+s[j]+s[q] > c && v[i]+v[j]+v[q] > d)
                        {
                            if(cost<leastcost)
                            {
                                leastcost=cost;

                                result[0]=q+1;
                                result[1]=j+1;
                                result[2]=i+1;
                                sort(result, result+3);
                                break;
                            }
                        }

                        for(int k=0;k<n;k++)
                        {
                            if(k!=q)
                            {
                                cost=cost+cst[k];
                                if(p[i]+p[j]+p[q]+p[k] > a && f[i]+f[j]+f[q]+f[k] > b && s[i]+s[j]+s[q]+s[k] > c && v[i]+v[j]+v[q]+v[k] > d)
                                {
                                    if(cost<leastcost)
                                    {
                                        leastcost=cost;

                                        result[0]=q+1;
                                        result[1]=j+1;
                                        result[2]=i+1;
                                        sort(result, result+3);
                                        break;
                                    }
                                }

                            }
                        }
                    }
                }

            }
        }
        cost=0;
    }

    cout<<leastcost<<endl;

    for(int i=0;i<50;i++)
    {
        if(result[i]==0)
        {
            break;
        }

        cout<<result[i]<<' ';
    }

    return 0;

}
