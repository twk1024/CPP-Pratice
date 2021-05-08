#include<bits/stdc++.h>
using namespace std;
int main()
{

    /* 문제명: 직각다각형
       문제: https://koi.or.kr/assets/koi/2019/1/m2-problems.pdf
    */

    int n; // 단순직각다각형의 꼭지점 개수
    cin>>n;

    int x[n], y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }

    int h=0, v=0, minValueX=500000, minValueY=500000, cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(x[i]==x[j])
                {
                    if(y[i] > 0 && y[j] < 0)
                    {
                        if(max(y[i], y[j])-min(y[i], y[j])<minValueX)
                        {
                            minValueX=max(y[i], y[j])-min(y[i], y[j]);
                            break;
                        }
                    }else if(y[i] < 0 && y[j] > 0){
                        if(max(y[i], y[j])-min(y[i], y[j])<minValueX)
                        {
                            minValueX=max(y[i], y[j])-min(y[i], y[j]);
                            break;
                        }
                    }
                }else if(y[i]==y[j]){
                    if(x[i] > 0 && x[j] < 0)
                    {
                        if(max(x[i], x[j])-min(x[i], x[j])<minValueY)
                        {
                            minValueY=max(x[i], x[j])-min(x[i], x[j]);
                            break;
                        }
                    }else if(x[i] < 0 && x[j] > 0){
                        if(max(x[i], x[j])-min(x[i], x[j])<minValueY)
                        {
                            minValueY=max(x[i], x[j])-min(x[i], x[j]);
                            break;
                        }
                    }
                }
            }
        }

        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(x[i]==x[j])
                {
                    if(y[i] > 0 && y[j] < 0)
                    {
                        if(max(y[i], y[j])-min(y[i], y[j])==minValueX)
                        {
                            h++;
                            break;
                        }
                    }else if(y[i] < 0 && y[j] > 0){
                        if(max(y[i], y[j])-min(y[i], y[j])==minValueX)
                        {
                            h++;
                            break;
                        }
                    }
                }else if(y[i]==y[j]){
                    if(x[i] > 0 && x[j] < 0)
                    {
                        if(max(x[i], x[j])-min(x[i], x[j])==minValueY)
                        {
                            v++;
                            break;
                        }
                    }else if(x[i] < 0 && x[j] > 0){
                        if(max(x[i], x[j])-min(x[i], x[j])==minValueY)
                        {
                            v++;
                            break;
                        }
                    }
                }
            }

        }
    }


    // printf("h: %d v: %d\n\n", h, v); h,v 값을 확인 (테스트용)
    printf("%d", max(h, v)); // 결과 출력

    return 0;
}
