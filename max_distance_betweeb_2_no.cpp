class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        // Your code goes here.
        int Max = 0;
        int left = 0;
        int right = arr.size()-1;
        for(int i=1;i<arr.size()+1;i++){
            if((arr[left] == num1 || arr[left] == num2) && (arr[right] == num1 || arr[right] == num2)&& left != right){
                Max = max(Max,(right-left-1));
            }
            else if(arr[left] == num1 || arr[left] == num2){
                right--;
            }
            else if(arr[right] == num1 || arr[right] == num2){
                left++;
            }
            else{
                left++;
                right--;
            }

        }
        return Max;
    }
};
