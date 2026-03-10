class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        for(int i = 0; i < arr.size(); i++) {
            for(int j =i+1; j < arr.size(); j++) {
                if(arr[i] + arr[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
//
// Created by Ali on 3/10/2026.
//