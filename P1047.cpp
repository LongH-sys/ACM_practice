#include <bits/stdc++.h>

int main()
{
    int l, m;
    std::cin >> l >> m;
    std::vector <int> trees(l + 1, 1);
    std::vector <std::vector<int>> intervals;
    int u, v;
    for (int i = 0; i < m; i++)
    {
        std::cin >> u >> v;
        intervals.push_back({u, v});
    }
    for (int i = 0; i < m; i++)
    {
        u = intervals[i][0];
        v = intervals[i][1];
        for (int j = u; j <= v; j++)
        {
            trees[j] = 0;
        }
    }
    int count = 0;
    for (int i = 0; i < static_cast<int>(trees.size()); i++)
    {
        if (trees[i] == 1)
        {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}