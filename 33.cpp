#include <bits/stdc++.h>

int main()
{
    int T = 0;
    std::cin >> T;
    std::vector<std::stack<unsigned long long>> stacks(T);
   
    for (int i = 0; i < T; i++)
    { 
        int N = 0;
        std::cin >> N;
        for (int j = 0; j < N; j++)
        {
            std::string request;
            std::cin >> request;
            if (request == "push")
            {
                int n = 0;
                std::cin >> n;
                stacks[i].push(n);
            }
            else if (request == "query")
            {
                if (stacks[i].empty())
                {
                    std::cout << "Anguei!" << std::endl;
                }
                else
                {
                    std::cout << stacks[i].top() << std::endl;
                }
            }
            else if (request == "size")
            {
                std::cout << stacks[i].size() <<std::endl;
            }
            else if (request == "pop")
            {
                if (stacks[i].empty())
                {
                    std::cout <<"Empty" << std::endl;
                }
                else
                {
                    stacks[i].pop();
                }
            }
        }
    }
    return 0;
} 