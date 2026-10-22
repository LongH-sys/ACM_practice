#include <bits/stdc++.h>

int main()
{
    std::string word;
    std::cin >> word;
    int pow = word.size() / 2;
    int k = word.size() - 1;
    bool success = false;
    for (int i = 0; i < pow; i++)
    {
        if (word[i] == word[k - i])
        {
            success = true;
        }
        else
        {
            success = false;
            break;
        }
    }
    if (success)
    {
        std::cout << "yes" << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }
    return 0;
}