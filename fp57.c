#include <string.h>
#include <math.h>
#include <stdio.h>
void shrey()
{
    int i, j, n, k;
    scanf("%d%d", &n, &k);
    int p[n+1],pos[n+1];
    for (i = 1; i <= n; i++)
    {
        scanf("%d",&p[i]);
        pos[p[i]] = i;
    }
    int ans[k+1][3];
    int temp = 0;
    int s = 0;
    for(i = 1; i <= n; i++)
    {
        if(p[i] != i) {
            if(p[p[i]] == i && p[i] > i)
            {
                s++;
            }
            else if(p[p[i]] != i)
            {
                temp++;
                if(temp > k)
                {
                    printf("-1\n");
                    return;
                }
                int i1 = i;
                int i2 = p[i];
                int i3 = pos[i];
                int v1 = p[i1], v2 = p[i2], v3 = p[i3];
                ans[temp][0] = i1;
                ans[temp][1] = i2;
                ans[temp][2] = i3;
                p[i2] = v1;
                p[i3] = v2;
                p[i1] = v3;
                pos[v1] = i2;
                pos[v2] = i3;
                pos[v3] = i1;
            }    
        }
    }
    if(s % 2 != 0)
    {
        printf("-1\n");
        return;
    }
    else
    {
        int i = 1, j = 0;
        s /= 2;
        while(s)
        {
            if(p[i] != i)
            {
                int i1 = i;
                int i3 = p[i];
                for(j = i + 1;j <= n;j++)
                {
                    if(p[j] != j && i3 != j)
                        break;
                }
                int i2 = j;
                int i4 = p[j];
                i = j;
                temp++;
                if(temp > k)
                {
                    printf("-1\n");
                    return;
                }
                ans[temp][0] = i1;
                ans[temp][1] = i2;
                ans[temp][2] = i3;
                temp++;
                if(temp > k)
                {
                    printf("-1\n");
                    return;
                }
                ans[temp][0] = i2;
                ans[temp][1] = i3;
                ans[temp][2] = i4;
                s--;
                p[i1] = i1;
                p[i2] = i2;
                p[i3] = i3;
                p[i4] = i4;
            }
            i++;
        }
    }
    printf("%d\n",temp);
    for(i=1;i<=temp;i++)
        printf("%d %d %d\n", ans[i][0], ans[i][1], ans[i][2]);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        shrey();
    }
}