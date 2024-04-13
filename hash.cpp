#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>m;
        int i = 0;
        vector<int>v;
        for (auto t : nums2)
        {
            m[t] = i++;
        }
        for (i = 0; i < nums1.size(); i++)
        {
            for (int j = m[nums1[i]]; j < nums2.size(); j++)
            {
                if (nums1[i] < nums2[j])
                {
                    v.push_back(j);
                    break;
                }
                if (j == nums2.size() - 1)
                    v.push_back(-1);
            }
        }
        return v;
    }
};
//class Solution {
//public:
//    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
//        vector<string> res;
//        unordered_map<string, int> hashmap;
//        int MIN = 100;
//
//        for (int i = 0; i < list1.size(); i++)
//            hashmap[list1[i]] = i;
//
//        for (int i = 0; i < list2.size(); i++) {
//            if (hashmap.count(list2[i]) > 0) {
//                if (hashmap[list2[i]] + i < MIN) {
//                    res.clear();
//                    MIN = hashmap[list2[i]] + i;
//                    res.push_back(list2[i]);
//                }
//                else if (hashmap[list2[i]] + i == MIN)
//                    res.push_back(list2[i]);
//            }
//        }
//
//        return res;
//    }
//};
//class Solution {
//public:
//    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
//        unordered_set<string> s;
//        vector<string> res;
//        for (auto t : list2)
//        {
//            s.insert(t);
//        }
//        int min = 0;
//        for (auto it=list1.begin();it<list1.end();it++)
//        {
//            if (s.find(*it) != s.end()&&)
//            {
//                min = it - list1.begin();
//                res.push_back(*it);
//                continue;
//            }
//        }
//        return res;
//    }
//};
//class Solution {
//public:
//    string replaceWords(vector<string>& dictionary, string sentence) {
//        //sort(dictionary.begin(), dictionary.end(), [](auto& s1, auto& s2) {return s1.length() < s2.length(); });
//        unordered_set<string>s;
//        for (auto t : dictionary)
//        {
//            s.insert(t);
//        }
//        string res, temp;
//        for (int i = 0; i < sentence.length(); i++)
//        {
//            if (sentence[i] == ' ')
//            {
//                res += temp;
//                res += " ";
//                temp.clear();
//                continue;
//            }
//            if (i == sentence.length() - 1)
//            {
//                res += temp;
//                temp.clear();
//                break;
//            }
//            temp += sentence[i];
//            if (s.find(temp) != s.end())
//            {
//                res += temp;
//                res += " ";
//                while (sentence[i] != ' ' && i != sentence.length() - 1)
//                {
//                    i++;
//                }
//                temp.clear();
//            }
//        }
//        return res;
//    }
//};
//class Node {
//public:
//    int val;
//    Node* next;
//    Node* random;
//
//    Node(int _val) {
//        val = _val;
//        next = NULL;
//        random = NULL;
//    }
//};
//
//class Solution {
//public:
//    Node* copyRandomList(Node* head) {
//        if (head == NULL)
//            return NULL;
//        unordered_map<Node*, Node*>m;
//        Node* h = head;
//        while (h->next != NULL)
//        {
//            m[h] = new Node(h->val);
//            h = h->next;
//        }
//        h = head;
//        while (h->next != NULL)
//        {
//            m[h]->next = m[h->next];
//            m[h]->random = m[h->random];
//            h = h->next;
//        }
//        return m[head];
//    }
//};
int main()
{

	return 0;
}