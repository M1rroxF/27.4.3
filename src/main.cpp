#include <iostream>
#include <vector> // vector<>
#include <fstream> // ofstream, ifstream
#include <string> // stoi()
#include <cstdlib> // rand()
#include <map> // map<>
#include <ctime> // time_t, tm*
#include <iomanip> // get_time(), put_time(), get_time()

using namespace std;

#include <command.h>

int main()
{
    vector<Command> commands;
    {
        cout << "Enter number of commands: ";
        int count_commands; cin >> count_commands;

        commands.resize(count_commands);

        for (int i = 0; i < count_commands; i++)
        {
            cout << "Enter amount of workers with command #" << i << ": ";
            int amount_workers; cin >> amount_workers;

            commands[i].init(amount_workers, i);
        }
    }

    bool go = true;
    while (go)
    {
        string n;
        cout << "print?\n";
        cin >> n;

        if (n == "print")
        {
            for (int i = 0; i < commands.size(); i++)
            {
                commands[i].print();
            }
        }

        for (int i = 0; i < commands.size(); i++)
        {
            cout << "Add work to command #" << i << ": ";
            int work; cin >> work;
            commands[i].add_work(work);
        }

        bool go2 = true;
        for (int i = 0; i < commands.size() && go2; i++)
        {
            if (!commands[i].all_is_working())
            {
                go2 = false;
            }
        }

        if (go2)
            go = false;
    }
}