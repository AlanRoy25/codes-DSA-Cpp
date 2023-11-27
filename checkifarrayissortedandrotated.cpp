class Solution
{
public:
  bool check(vector<int> &nums)
  {
    int count = 0;

    /*for (int i=1; i<nums.size(); i++){
   if (nums[i-1] > nums[i])
 {
   count ++;
 }
 }

 if (nums[n-1] > nums[0] )
 count++;

 return count <=1;
 }
 };
 */

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] > nums[(i + 1) % nums.size()])
      {
        count++;
      }
    }
    if (count > 1)
    {
      return false;
    }

    return true;
  }
};