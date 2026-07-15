#include <stdio.h>
#include <stdlib.h>
 
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
 
int main()
{
    int t;
    scanf("%d", &t);
 
    while (t--)
    {
        int n, c;
        scanf("%d %d", &n, &c);
 
        int a[105], b[105];
        int sa[105], sb[105];
 
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sa[i] = a[i];
        }
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        sb[i] = b[i];
    }
 
int ans = 1000000000;
 
int ok = 1;
int cost = 0;
 
for (int i = 0; i < n; i++)
{
    if (a[i] < b[i])
    {
        ok = 0;
        break;
    }
cost += a[i] - b[i];
}
 
if (ok)
ans = cost;
 
qsort(sa, n, sizeof(int), cmp);
qsort(sb, n, sizeof(int), cmp);
 
ok = 1;
cost = c;
 
for (int i = 0; i < n; i++)
{
    if (sa[i] < sb[i])
    {
        ok = 0;
        break;
    }
cost += sa[i] - sb[i];
}
 
if (ok && cost < ans)
ans = cost;
 
if (ans == 1000000000)
printf("-1
");
else
printf("%d
", ans);
}
 
return 0;
}