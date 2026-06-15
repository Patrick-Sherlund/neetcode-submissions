class MyHashSet:

    def __init__(self):
        self._hashSet = [False] * 10000001
        

    def add(self, key: int) -> None:
        self._hashSet[key] = True
        

    def remove(self, key: int) -> None:
        self._hashSet[key] = False

    def contains(self, key: int) -> bool:
        return self._hashSet[key]


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)