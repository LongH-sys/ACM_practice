#include <iostream>

#include <vector>

int main()
{
    std::vector <int> vec;
    int num = 0;
    while (std::cin >> num)
    {
        if (num == 0)
        {
            break;
        }
        else
        {
            vec.push_back(num);
        }
    }
    
    for (int i = vec.size() - 1; i >= 0; i --)
    {
        std::cout << vec[i] <<" ";
    }
    std::cout << std::endl;
    return 0;
}