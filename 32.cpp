#include <bits/stdc++.h>

int main()
{
    std::queue<int> q;
    int N = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        int op;
        std::cin >> op;
        switch (op)
        {
            case 1:
            {
                int x = 0;
                std::cin >> x;
                q.push(x);
                break;
            }
            case 2:
            {
                if (q.empty())
                {
                    std::cerr << "ERR_CANNOT_POP" << std::endl;
                }
                else
                {
                    q.pop();
                }
                break;
            }
            case 3:
            {
                if (q.empty())
                {
                    std::cerr << "ERR_CANNOT_QUERY" << std::endl;
                }
                else
                {
                    std::cout << q.front() << std::endl;
                }
                break;
            }
            case 4:
            {
                std::cout << q.size() << std::endl;
                break;
            }
        }
    }
    return 0;
}