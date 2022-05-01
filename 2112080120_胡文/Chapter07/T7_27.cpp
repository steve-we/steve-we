/*
 Filename:
 Author:Hu Wen
 Time:Apr 29 ,2022
 Function:
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
int vis[100];
int prime[100];
int c = 0;
int n=1000;
int main()
{
        int cnt = 1;

        memset(vis, 0, sizeof(vis));
        int m = sqrt(double(n+0.5));

        for(int i = 2; i <= m; i++)
                if(!vis[i])
                {
                        prime[c++] = i;
                        for(int j = i*i; j <= n; j += i)
                        {
                                vis[j] = 1;
                                //printf("%d\n", j);
                        }
                }

        for(int i = 2; i < n; i++)
        {
                if(vis[i] == 0)
                {
                        printf("%d ", i);
                        cnt++;
                        if(cnt % 10 == 0)
                               printf("\n");
                }
        }
       // printf("\ncnt = %d\n", cnt);
        return 0;
}
