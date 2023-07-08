class Solution {
public:
    int get(int n){
        int sum=0;
        while(n>0){
            sum+=pow(n%10,2);
            n=n/10;

        }return sum;
    }
    bool isHappy(int n) {
     if(n==1)return true;
     unordered_set<int> check;
     while(n!=1){
         n=get(n);
         if(check.count(n))break;
         else check.insert(n);
     }   return n==1;
    }
};