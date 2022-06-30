#include <iostream>
#include <vector>

using namespace std;

vector<string> unix_path_resolution(vector<string> &path)
{
    vector<string> current;

    for (const auto &directory : path)
    {
        if (directory == "..")
        {
            if (!current.empty())
                current.pop_back();
        }
        else if (directory != ".")
            current.push_back(directory);
    }
    return current;
}