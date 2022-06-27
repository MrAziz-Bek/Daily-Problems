public class Solution
{
    public static bool IsPalindrome(int x)
    {
        if (x < 0)
            return false;
        int copyX = x, reverse = 0;

        while (x != 0)
        {
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }
        return reverse == copyX;
    }
}