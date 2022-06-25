#include <iostream>
#include <vector>

using namespace std;

class LLNode
{
    public:
        int val;
        LLNode *next;
};

int length_of_linked_list(LLNode *node)
{
    if (node == NULL)
        return 0;
    int count = 1;
    while (node->next)
    {
        node = node->next;
        count++;
    }

    return count;
}