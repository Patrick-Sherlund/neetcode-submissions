class MyHashSet {

    boolean[] _hashSet;

    public MyHashSet() {
        _hashSet = new boolean[10000001];
    }
    
    public void add(int key) {
        this._hashSet[key] = true;
    }
    
    public void remove(int key) {
        this._hashSet[key] = false;
    }
    
    public boolean contains(int key) {
        return this._hashSet[key];
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */