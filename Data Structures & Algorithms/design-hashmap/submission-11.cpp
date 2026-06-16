class MyHashMap {
public:
    MyHashMap() 
    : m_hashMap(BUCKET_SIZE, nullptr) {}

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
        Node* head = m_hashMap[index];

        if(head == nullptr) {
            m_hashMap[index] = new Node(key, value, nullptr);
            return;
        }

        while(head != nullptr) {
            if(head->key == key) {
                head->value = value;
                return;
            }
            if(head->next == nullptr) {
                break;
            }
            head = head->next;
        }

        head->next = new Node(key, value, nullptr);
    }
    
    int get(int key) {
        int index = getIndex(key);

        Node* head = m_hashMap[index];

        while(head != nullptr) {
            if (head->key == key) {
                return head->value;
            }
            head = head->next;
        }
        return -1;
    }
    
    void remove(int key) {
        int index = getIndex(key);

        Node* head = m_hashMap[index];
        Node* previous = nullptr;
        while(head != nullptr) {
            if(head->key == key) {
                if(previous == nullptr) {
                    m_hashMap[index] = head->next;
                } else {
                    previous->next = head->next;
                }
                delete head;
                return;
            }
            previous = head;
            head = head->next;
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

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */