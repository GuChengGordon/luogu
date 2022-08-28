#include <bits/stdc++.h>
using namespace std;
#define maxn 105

struct Node{
    int a, b;
    int w;
    bool operator <(const struct Node &n)const{
        return w> n.w;
    }
};
priority_queue <Node> edge;
vector <Node> G[maxn];
bool visted[maxn];

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    	for (int j = 0; j < N; j++)
		{
    		int tmp;
    		scanf("%d", &tmp);
    		if (tmp == 0) continue;
    		else
			{
    			G[i].push_back({i, j, tmp});
        		G[j].push_back({j, i, tmp});
            }
        }
    visted[1] = true;
    for (int i = 0; i < G[1].size(); i++)
        edge.push(G[1][i]);
    int all = 0;
    int cnt = 0;
    while (cnt < N - 1)
	{
        int w = edge.top().w;
        int n = edge.top().b;
        edge.pop();
        if (visted[n])
            continue;
        visted[n] = true;
        all += w;
        cnt ++;
        for (int i = 0; i < G[n].size(); i++)
        {
            if (!visted[G[n][i].b])
                edge.push(G[n][i]);
        }
    }
    printf("%d\n", all);
    return 0;
}