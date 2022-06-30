#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

string reverse_words(string sentence)
{
    stack<string> stack;
    string res;

    for(int i = 0; i < sentence.length(); i++)
    {
        string temp;
        while(sentence[i] != ' ' && i < sentence.length())
        {
            temp += sentence[i];
            i++;
        }
        stack.push(temp);
    }
    while(!stack.empty())
    {
        res += stack.top() + " ";
        stack.pop();
    }
    return res.substr(0, res.length() - 1);
}