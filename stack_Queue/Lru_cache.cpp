class LRUCache
{
    private:
        list<int> st;
        unordered_map<int, list<int>::iterator>  mp;
        unordered_map<int, int> values;
        int size;
    public:
    /* Constructor for initializing the cache capacity with the given value. */
    LRUCache(int cap){
        size = cap;
    }
    
    /* Function to return value corresponding to the key. */
    int get(int key){
        /* If we didn't get the element return -1 */
        if(mp.find(key)==mp.end()){
            return -1;
        }
        /* If the element is present :
            (i) Erase that from the map as well as from list
            (ii) Insert at the front and insert value to the map
            (iii) Return the value from the map
        */
        st.erase(mp[key]);
        mp.erase(key);
        st.push_front(key);
        mp[key] = st.begin();
        return values[key];
    }
    
    /* Function for storing key-value pair. */
    void set(int key, int value)
    {
        /* If the key is not present in the map :
            (i) Check whether the list size is full or not
            (ii) if full then remove the last element delete 
                 from the map as well delete the value of that
            (iii) Insert element at the beginning and update
                 the value.
                 
            If the key is present in the map:
            (i) delete key from the map as well delete the value of that
            (ii) Insert element at the beginning of list and update
                 the value.
        */
        if(mp.find(key) == mp.end()){
            if(st.size() == size){
                int x = st.back();
                st.pop_back();
                values.erase(x);
                mp.erase(x);
            }
        }
        else{
            st.erase(mp[key]);
            mp.erase(key);
            values.erase(key);
        }
        st.push_front(key);
        mp[key] = st.begin();
        values[key] = value;
    }
};