#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;

    int g[k], s=0;
    for(int i=0;i<k;i++)
    {
        cin>>g[i];
        s+=g[i];
    }


    int cnt=0, curvalue, status=0;
    for(int i=0;i<s;i++)
    {
        curvalue=0;
        for(int a=0;a<k;a++)
        {
            curvalue=g[a];

            if(curvalue==i)
            {
                cnt++;
                status=1;
                break;
            }

            for(int b=0;b<k;b++)
            {
                if(a!=b && status==0)
                {
                    curvalue=g[a]+g[b];

                    if(curvalue==i)
                    {
                        cnt++;
                        status=1;
                        break;
                    }

                    for(int c=0;c<k;c++)
                    {
                        if(a!=b && a!=c && b!=c && status==0)
                        {
                            curvalue=g[a]+g[b]+g[c];

                            if(curvalue==i)
                            {
                                cnt++;
                                status=1;
                                break;
                            }

                            for(int d=0;d<k;d++)
                            {
                                if(a!=b && a!=c && b!=c && a!=d && b!=d && c!=d && status==0)
                                {
                                    curvalue=g[a]+g[b]+g[c]+g[d];

                                    if(curvalue==i)
                                    {
                                        cnt++;
                                        status=1;
                                        break;
                                    }
                                }
                            }

                        }
                    } 

                }
            }            

        }
        
    }

    cout<<cnt-1<<endl;

    return 0;
}
