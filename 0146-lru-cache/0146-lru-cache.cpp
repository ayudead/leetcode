class Node{
public:
    int key;
    int data;
    Node*prev;
    Node*next;
    
    Node(int k,int d){
        key =k;
        data= d;
        prev = NULL;
        next = NULL;
    }
    
};


class LRUCache {
public:
    Node* head = new Node(-1, -1);
    Node* tail = new Node (-1, -1);
    int capacity;
    void deletek(Node* node){
        Node* nextt = node->next;
        Node* prev = node->prev;
        prev->next = nextt;
        nextt->prev = prev;
    }
    
    void insertk(Node*node){
        Node* nextt = head->next;
        head->next = node;
        node->prev = head;
        node->next = nextt;
        nextt->prev = node;
    }
    unordered_map<int, Node*>mpp;
    LRUCache(int cap) {
        capacity = cap;
        head->next = tail;
        tail->prev = head;
        
    }

    int get(int key) {
        if(mpp.find(key) == mpp.end()) return -1;
        Node* node = mpp[key];
        deletek(node);
        insertk(node);
        return node->data;
    }

        
    void put(int key, int value) {
        if(mpp.find(key) != mpp.end()){
            Node* node = mpp[key];
            node->data = value;
            deletek(node);
            insertk(node);
        }
        else {
            if(capacity == mpp.size()){
                Node* node = tail->prev;
                deletek(node);
                mpp.erase(node->key);
                delete node;
            }
            Node* node = new Node(key,value);
            mpp[key] = node;
            insertk(node);
        }
    }
    
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */