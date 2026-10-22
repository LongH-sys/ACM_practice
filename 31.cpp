#include <bits/stdc++.h>

int main()
{
    int N = 0;
    std::cin >> N;
    std::vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> vec[i];
    }
    for (int i = 0; i < static_cast<int>(vec.size()); i++)
    {
        for (int j = i + 1; j < static_cast<int>(vec.size()); j++)
        {
            if (vec[i] == vec[j])
            {
                vec.erase(vec.begin() + j);
            }
        }
    }
    for (int i = 0; i < static_cast<int>(vec.size()); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}