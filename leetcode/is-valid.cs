public class Solution
{
    public static bool IsValid(string s)
    {
        var stack = new Stack<char>();

        foreach (var c in s)
        {
            if (c == '(' || c == '[' || c == '{')
                stack.Push(c);
            else
            {
                if (stack.Count == 0)
                    return false;

                var last = stack.Pop();
                if (c == ')' && last != '(')
                    return false;

                if (c == ']' && last != '[')
                    return false;

                if (c == '}' && last != '{')
                    return false;
            }
        }
        return stack.Count == 0;
    }
}