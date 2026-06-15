class MyHashSet:

    def __init__(self):
        self.hashDict = {}     

    def add(self, key: int) -> None:
        self.hashDict[key] = True
        

    def remove(self, key: int) -> None:
        if key in self.hashDict.keys():
            self.hashDict.pop(key)

    def contains(self, key: int) -> bool:
        if key in self.hashDict.keys():
            return True;
        return False;


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)