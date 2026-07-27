class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int x : nums) {
            if (x > largest) {
                secondLargest = largest;
                largest = x;
            }
            else if (x > secondLargest) {
                secondLargest = x;
            }
        }

        return (largest - 1) * (secondLargest - 1);
    }
};