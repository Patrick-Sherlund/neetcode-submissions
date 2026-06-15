#include <algorithm>

class MyHashSet {
public:
    MyHashSet() {
    }
    
    void add(int key) {
        if(!contains(key)){
            m_hashSet.push_back(key);
        }
    }
    
    void remove(int key) {
        std::erase(m_hashSet, key);
    }
    
    bool contains(int key) {
        const auto& it = std::find(m_hashSet.begin(), m_hashSet.end(), key);
        return it != m_hashSet.end();
    }
private:
    std::vector<int> m_hashSet;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */