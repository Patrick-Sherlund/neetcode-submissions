class MyHashSet {
    constructor() {
        this._hashSet = Array(1000001).fill(false);
    }

    /**
     * @param {number} key
     * @return {void}
     */
    add(key: number): void {
        this._hashSet[key] = true;
    }

    /**
     * @param {number} key
     * @return {void}
     */
    remove(key: number): void {
        this._hashSet[key] = false;
    }

    /**
     * @param {number} key
     * @return {boolean}
     */
    contains(key: number): boolean {
        return this._hashSet[key];
    }

    _hashSet: boolean[]
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * var obj = new MyHashSet()
 * obj.add(key)
 * obj.remove(key)
 * var param_3 = obj.contains(key)
 */
