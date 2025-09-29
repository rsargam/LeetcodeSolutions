// Last updated: 29/09/2025, 16:28:51
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int> result(temperatures.size());

        // [89,62,70,58,47,47,46,76,100,70]
        //                           *   0

        // 70

        vector<int> stack;

        for (int i = temperatures.size() - 1; i >= 0; --i)
        {
            const auto t = temperatures[i];

            while (!stack.empty() && temperatures[stack.back()] <= t)
                stack.pop_back();

            result[i] = stack.empty() ? 0 : stack.back() - i;

            stack.push_back(i);
        }

        return result;
    }
};