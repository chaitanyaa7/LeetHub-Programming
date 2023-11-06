class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int s;
    SeatManager(int n) {
        s=1;
    }
    
    int reserve() {
        if(!pq.empty()){
            int x=pq.top();
            pq.pop();
            return x;
        }
        int seat=s;
        s++;
        return seat;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */