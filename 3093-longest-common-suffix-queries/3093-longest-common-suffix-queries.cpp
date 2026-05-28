class Solution {
public:

    struct Node {
        int child[26];
        int idx;
        int len;

        Node() {
            memset(child, -1, sizeof(child));
            idx = -1;
            len = INT_MAX;
        }
    };

    vector<Node> trie;

    Solution() {
        trie.push_back(Node()); // root
    }

    void update(int node, int wordLen, int index) {

        if(wordLen < trie[node].len) {
            trie[node].len = wordLen;
            trie[node].idx = index;
        }
        else if(wordLen == trie[node].len &&
                index < trie[node].idx) {

            trie[node].idx = index;
        }
    }

    void insert(string &word, int index) {

        int node = 0;

        update(node, word.size(), index);

        for(int i = word.size() - 1; i >= 0; i--) {

            int c = word[i] - 'a';

            if(trie[node].child[c] == -1) {

                trie[node].child[c] = trie.size();
                trie.push_back(Node());
            }

            node = trie[node].child[c];

            update(node, word.size(), index);
        }
    }

    int query(string &word) {

        int node = 0;

        for(int i = word.size() - 1; i >= 0; i--) {

            int c = word[i] - 'a';

            if(trie[node].child[c] == -1) {
                break;
            }

            node = trie[node].child[c];
        }

        return trie[node].idx;
    }

    vector<int> stringIndices(vector<string>& wordsContainer,
                              vector<string>& wordsQuery) {

        for(int i = 0; i < wordsContainer.size(); i++) {
            insert(wordsContainer[i], i);
        }

        vector<int> ans;

        for(auto &q : wordsQuery) {
            ans.push_back(query(q));
        }

        return ans;
    }
};