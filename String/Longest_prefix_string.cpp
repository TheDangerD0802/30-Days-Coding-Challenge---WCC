class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        int N = arr.size();
if (N == 0){
return "";
}
else if (N == 1){
return arr[0];
}
else{
// Sort the array
sort(arr.begin(), arr.end());
int length = arr[0].size();
string result = "";
// Compare the first and the last string characters
for(int i = 0; i < length; i++)
{
// If the characters match add in result.
if(arr[0][i] == arr[N-1][i]){
result += arr[0][i];
}
// Else stop the comparison.
else{
break;
}
}
if(result!="")
return result;
else
return "";
}
    }
};