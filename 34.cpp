#include <bits/stdc++.h>

int main()
{
    std::vector<char> letter;
    std::string word;
    std::cin >> word;
    for (int i = 0; i < word.size(); i++)
    {
        letter.push_back(word[i]);
    }
    int k = static_cast<int>(letter.size());
    
    if (letter[k - 1] == 'r' && letter[k - 2] == 'e')
    {
        letter.erase(letter.begin() + (k - 2), letter.end());
    }
    else if (letter[k - 1] == 'y' && letter[k - 2] == 'l')
    {
        letter.erase(letter.begin() + (k - 2), letter.end());
    }
    else if (letter[k - 1] == 'g' && letter[k - 2] == 'n' && letter[k - 3] == 'i')
    {
        letter.erase(letter.begin() + (k - 3), letter.end());
    }
    
    for (int i = 0; i < static_cast<int>(letter.size()); i++)
    {
        std::cout << letter[i];
    }
    std::cout << std::endl;
    return 0;
}