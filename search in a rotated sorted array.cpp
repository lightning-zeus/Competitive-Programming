class Solution 
{
    int find_rotated_index( const std::vector<int>& arr )
    {
        const auto N = arr.size();
        
        int low = 0, high = N - 1;
        
        // if its already sorted
        // return the lowerbound
        if( arr[low] < arr[high] )
            return low;
        
        while( low <= high )
        {
            const auto mid = low + (high-low)/2;
            
            // terminal conditions
            if( arr[mid] > arr[mid+1] )
                return mid + 1;
            
            if( arr[mid-1] > arr[mid] )
                return mid;
            
            // if the number at the pivot
            // is larger than the upper
            // bound, we need to narrow
            // the search to that range
            if( arr[mid] > arr[high] )
            {
                low = mid + 1;
            }
            else
            {
                // otherwise move 
                // the upperbound down
                high = mid - 1;
            }
        }
        
        return 0;
    }
    
    int bin_search( const std::vector<int>& arr, 
               const int start, const int stop,
              const int target )
    {
        int low = start, high = stop;
        
        while( low <= high )
        {
            const auto mid = low + (high-low)/2;
            
            // check pivot for target
            if( arr[mid] == target )
                return mid;
            
            // cut search space in half & resume
            if( arr[mid] < target )
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        
        // doesn't exist
        return -1;
    }
    
public:
    
    int search( vector<int>& nums, int target )
    {
        const auto N = nums.size();
        
        // for an input of <= 3 we just use a simple
        // linear search to cut out the edge cases
        // for n = 1, n = 2, n = 3;
        if( N <= 3 )
        {
            for( auto index = 0; index < N; ++index )
            {
                if( nums[index] == target )
                    return index;
            }
            
            return -1;
        }
        
        // for N > 3, find the pivot index
        const int pivot = find_rotated_index( nums );
        
        // then partition the search space according to the 
        // two remaining conditions:
                
        // #1 target is between [0, pivot], where pivot != 0
        if( pivot > 0 && target >= nums[0] && target <= nums[pivot-1] )
        {
            return bin_search( nums, 0, pivot - 1, target );    
        }
        
        // #2 target is in [pivot, N-1] (0 inclusive, which also handles the base case of the input being sorted)
        return bin_search( nums, pivot, N - 1, target );
    }
};