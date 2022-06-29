#include <iostream>

using namespace std;

class LLNode
{
    public:
        int val;
        LLNode *next;
};
bool solve(LLNode *head)
{
    bool incr = true;
    while(head->next)
    {
        if(head->val > head->next->val)
            return false;
        head = head->next;
    }
    return incr;
}