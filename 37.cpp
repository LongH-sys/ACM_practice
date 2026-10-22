#include <bits/stdc++.h>

int main()
{
    std::vector<int> vec;
    std::string word;
    std::cin >> word;
    int num = 0;
    for (int i = 0; i < static_cast<int>(word.size()); i++)
    {
        if (word[i] >= '0' && word[i] <= '9')
        {
            num = num * 10 + (word[i] - '0');
        }
        else if (word[i] == '.')
        {
            vec.push_back(num);
            num = 0;
        }
        else if (word[i] == '@')
        {
            break;
        }
        else
        {
            int b = vec.back();
            vec.pop_back();
            int a = vec.back();
            vec.pop_back();
            int result = 0;
            if (word[i] == '+')
            {
                result = a + b;
            }
            else if (word[i] == '-')
            {
                result = a - b;
            }
            else if (word[i] == '*')
            {
                result = a * b;
            }
            else if (word[i] == '/')
            {
                result = a / b;
            }
            vec.push_back(result);
        }
    }
    std::cout << vec.front() << std::endl;
    return 0;
}