#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int random(const int& min, const int& max)
{
    return ( rand() % (max - (min-1)) + min);
}

char set_complexity()
{
    if (rand() % 3 > 1)
    {
        if (rand() % 2 == 1)
            return 'A';
        else
            return 'B';
    }
    else
    {
        if (rand() % 2 == 1)
            return 'B';
        else
            return 'C';
    }
}

class Command
{
    int number_manager;
    vector<int> workers;
    vector<char> complexity;

  public:

    void init(int count_workers, int num)
    {
        number_manager = num;

        workers.resize(count_workers);
        complexity.resize(count_workers);
        for (int i = 0; i < count_workers; i++)
        {
            workers[i] = 0;
            complexity[i] = set_complexity();
        }
    }

    void add_work(int w) {
        srand(number_manager + w);
        w = random(1, workers.size());
        int doing = 0;

        if (workers[0] > workers[workers.size() - 1])
        {
            for (int i = 0; i < workers.size(); i++)
            {
                if (workers[i] < workers[0] && doing < w)
                {
                    workers[i]++;
                    doing++;
                }
            }
            if (w > doing)
            {
                for (int i = 0; i < w-doing; i++)
                {
                    workers[i]++;
                }
            }
        }
        else
        {
            for (int i = 0; i < w; i++)
            {
                workers[i] += 1;
            }
        }
    }

    bool all_is_working()
    {
        return workers[workers.size()-1] != 0;
    }

    void print()
    {
        cout << "--|--|--|--|--|--\n";
        cout << "command #" << number_manager << endl;
        for (int i = 0; i < workers.size(); i++)
        {
            cout << i << ": " << workers[i] << " - " << complexity[i] << endl;
        }
    }
};