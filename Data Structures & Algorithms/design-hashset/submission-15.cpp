#include <algorithm>

class MyHashSet {
public:
    MyHashSet() : m_hashSet(1000001, false) {}
    
    void add(int key) {
        m_hashSet[key] = true;
    }
    
    void remove(int key) {
        m_hashSet[key] = false;
    }
    
    bool contains(int key) {
        return m_hashSet[key];
    }
private:
    std::vector<bool> m_hashSet;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */