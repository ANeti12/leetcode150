class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int solution = 0; 
        map<int, int> occurences; // using a map to store the number in nums and it's occurences, this will be used to calculate the majority element
        for (int num: nums) {
            occurences[num]++;
        }
        for (int num: nums) {
            if (occurences[num] > (nums.size()) / 2) {
                solution = num;
            }
        }
        return solution;
    }
};