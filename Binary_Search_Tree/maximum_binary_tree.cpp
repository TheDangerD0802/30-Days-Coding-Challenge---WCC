struct info {
int size;
int min;
int max;
};

info solve(Node* root, int& ans) {
if(root == 0) {
return {0, INT_MAX, INT_MIN};
}
info l = solve(root->left, ans);
info r = solve(root->right, ans);
if(l.size >= 0 && r.size >= 0 && root->data > l.max && root->data < r.min) {
ans = max(ans, 1 + l.size + r.size);
return {
1 + l.size + r.size,
min(l.min, min(r.min, root->data)),
max(l.max, max(r.max, root->data))
};
}
return {-1, 0, 0};
}

int largestBst(Node *root) {
int ans = 0;
solve(root, ans);
return ans;
}
