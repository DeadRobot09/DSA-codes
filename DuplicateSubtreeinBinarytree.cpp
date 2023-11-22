class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    unordered_map<string,int> mp;
    
    string solve(Node* node)
    {
        if(node==NULL)return "";
        string ans="";
        string l=solve(node->left);
        string r=solve(node->right);
        ans=l+"#"+to_string(node->data)+"#"+r;
        if(node->left || node->right)mp[ans]++;
        return ans;
    }
    
    int dupSub(Node *root) {
        string x=solve(root);
        for(auto o:mp)
        {
            if(o.second>1)
            {
                return true;
            }
        }
        return false;
         // code here
    }
};
