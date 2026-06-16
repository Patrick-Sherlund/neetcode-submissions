class MyHashMap {
public:
    MyHashMap() : m_hashMap(BUCKET_SIZE, nullptr) {}

    ~MyHashMap() {
        for(Node* head : m_hashMap) {
            while(head != nullptr) {
                Node* currentNode = head->next;
                delete head;
                head = currentNode;
            }
        }
    }
    
    void put(int key, int value) {
        int index = getIndex(key);

        if(m_hashMap[index] == nullptr) {
            m_hashMap[index] = new Node(key, value, nullptr);
            return;
        }

        Node* currentNode = m_hashMap[index];

        while(currentNode != nullptr) {
            if(currentNode->key == key) {
                currentNode->value = value;
                return;
            }
            if(currentNode->next == nullptr) {
                break;
            }
            currentNode = currentNode->next;
        }
        currentNode->next = new Node(key, value, nullptr);
    }
    
    int get(int key) {
        int index = getIndex(key);
        Node* currentNode = m_hashMap[index];

        while(currentNode != nullptr) {
            if(key == currentNode->key) {
                return currentNode->value;
            } else {
                currentNode = currentNode->next;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = getIndex(key);
        Node* currentNode = m_hashMap[index];
        Node* previousNode = nullptr;

        while(currentNode != nullptr) {
            if(currentNode->key == key) {
                if(previousNode == nullptr) {
                    m_hashMap[index] = currentNode->next;
                } else {
                    previousNode->next = currentNode->next;
                }
                delete currentNode;
                return;
            }
            previousNode = currentNode;
            currentNode = currentNode->next;
        }
    }
private:
    struct Node {
        int key;
        int value;
        Node* next;

        Node(int key = -1, int value = -1, Node* next = nullptr) 
        : key(key), value(value), next(next) {}
    };

    static constexpr int BUCKET_SIZE = 1000;
    std::vector<Node*> m_hashMap;

    int getIndex(int key) {
        return (key % BUCKET_SIZE);
    }
};