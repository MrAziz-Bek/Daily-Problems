public class Solution
{
    public static int RomanToInt(string s)
    {
        var roman = new Dictionary<char, int>
        {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int sum = 0;

        for (int i = 0; i < s.Length; i++)
        {
            if (i + 1 < s.Length && roman[s[i]] < roman[s[i + 1]])
                sum -= roman[s[i]];
            else
                sum += roman[s[i]];
        }
        return sum;
    }
}