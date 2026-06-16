class MyHashMap {

    public MyHashMap() {
        this._hashMap = new ArrayList<int[]>();
    }
    
    public void put(int key, int value) {
        int[] vec = find(key);
        if(vec != null) {
            vec[1] = value;
        } else {
            this._hashMap.add(new int[]{key, value});
        }
    }
    
    public int get(int key) {
        int[] vec = find(key);
        if(vec != null) {
            return vec[1];
        }
        return -1;
    }
    
    public void remove(int key) {
        int[] vec = find(key);
        if(vec != null) {
            vec[1] = -1;
            vec[0] = -1;
        }
    }

    private int[] find(int key) {
        for(int[] vec : this._hashMap) {
            if(vec[0] == key) {
                return vec;
            }
        }
        return null;
    }

    private ArrayList<int[]> _hashMap;
}

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */