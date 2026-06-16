class MyHashMap {
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        std::vector<int>* vec = find(key);
        if(vec != nullptr) {
            (*vec)[1] = value;
        } else {
            hashMap.push_back({key, value});
        }
    }
    
    int get(int key) {
        std::vector<int>* vec = find(key);
        if(vec != nullptr) {
            return (*vec)[1];
        }
        return -1;
    }
    
    void remove(int key) {
        std::vector<int>* vec = find(key);
        if(vec != nullptr) {
            (*vec)[0] = -1;
            (*vec)[1] = -1;
        }
    }
private:
    std::vector<int>* find(int key) {
        for(std::vector<int>& vec : hashMap) {
            if(vec[0] == key) {
                return &vec;
            }
        }
        return nullptr;
    }
    std::vector<std::vector<int>> hashMap;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */