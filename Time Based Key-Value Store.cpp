class TimeMap {
public:
    unordered_map<string , vector<pair<int,string>>> mp;
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end()){
            return "";
        }
        int low =0;
        int high = mp[key].size() -1;
        while(low <=high){
            int mid = (low+high) /2;
            if(mp[key][mid].first==timestamp){
                return mp[key][mid].second;
            }
            else if(mp[key][mid].first > timestamp){
                high = mid-1;
            }
            else{
             low = mid+1;

            }

        }
        if(high < 0){
            return "";
        }
        return mp[key][high].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */