#include <bits/stdc++.h>

int main()
{
    int T = 0;
    std::cin >> T;
    std::vector<std::vector<int>> vec(T);
    for (int i =0; i < T; i++)
    {
        int n = 0;
        std::cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x = 0;
            std::cin >> x;
            vec[i].push_back(x);
        }
        
        for (int j = 0; j < static_cast<int>(vec[i].size()); j++)
        {
            for (int k = j + 1; k < static_cast<int>(vec[i].size()); k++)
            {
                if (vec[i][j] == vec[i][k])
                {
                    vec[i].erase(vec[i].begin() + k);
                }
                else
                {
                    continue;
                }
            }
        }
    }
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < static_cast<int>(vec[i].size()); j++)
        {
            std::cout << vec[i][j] <<" ";
        }
        std::cout << std::endl;
    }
    return 0;
}