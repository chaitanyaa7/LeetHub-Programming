class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int l=0,h=arr.size()-1;
        while(l<=h){
            int mid=l + (h-l) / 2;;
            if(arr[mid]==target)return true;
            else if(arr[l]==arr[mid] && arr[mid]==arr[h]){
                l+=1;
                h-=1;
                continue;
            }
            else if(arr[l]<=arr[mid]){
                 if(arr[l]<=target && target<=arr[mid])h=mid-1;
                 else l=mid+1;
            }
            else{
                if(arr[mid]<=target && target<=arr[h])l=mid+1;
                else h=mid-1;
            }
        }return false;
    }
};