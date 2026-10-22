#include <bits/stdc++.h>

struct Student
{
    int chinese, math, english;
    int total()
    {
        return chinese + math + english;
    }
};

bool score_diff(Student& s1, Student& s2)
{
    if (std::abs(s1.chinese - s2.chinese) > 5 || 
        std::abs(s1.math - s2.math) > 5 ||
        std::abs(s1.english - s2.english) > 5 ||
        std::abs(s1.total() - s2.total()) > 10)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int N = 0;
    std::cin >> N;
    std::vector <Student> vec(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> vec[i].chinese >> vec[i].math >> vec[i].english;
    }
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (score_diff(vec[i], vec[j]))
            {
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}

