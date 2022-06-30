#include <iostream>
#include <cmath>

using namespace std;

class LLNode
{
public:
    int val;
    LLNode *next;
};

int linked_list_to_integer(LLNode *node)
{
    int dec = 0;
    while(node)
    {
        dec *= 2;
        dec += node->val;
        node = node->next;
    }
    return dec;
}