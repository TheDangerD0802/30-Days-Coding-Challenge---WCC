class Solution {
public:
		map<int, vector> mp;
		vector<vector> verticalTraversal(TreeNode* root) {
		queue<pair<TreeNode *, int>> q;
		q.push({root, 0});
		while(q.size()){
		int n=q.size();
		vector<pair<int, int>> v;
		for(int i=0;i<n;i++){
		root=q.front().first;
		int h = q.front().second;
		q.pop();
		v.push_back({root->val, h});
		if(root->left) q.push({root->left, h-1});
		if(root->right) q.push({root->right, h+1});
		}
		sort(v.begin(), v.end());
		for(int i=0;i<v.size();i++){
		mp[v[i].second].push_back(v[i].first);
		}
		}
		vector<vector> v;
		for(auto x: mp) v.push_back(x.second);
		return v;
}
};