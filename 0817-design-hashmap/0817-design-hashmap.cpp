class MyHashMap {
public:
    vector<pair<int,int>> map;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        for(auto &it:map){
            if(it.first==key){
                it.second=value;
                return;
            }
        }
        map.push_back({key,value});
    }
    
    int get(int key) {
        for(auto &it:map){
            if(it.first==key){
                return it.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(auto it=map.begin();it!=map.end();it++){
            if(it->first==key){
                map.erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */