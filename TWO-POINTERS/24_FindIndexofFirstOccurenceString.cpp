//lc 28
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
// haystack =' h e l l o '
//needle = ' l l '
        /*i<n-m  eg , n=7 m=4 so size will be 3 taki needle fit hojaye string me  */
        for (int i = 0; i <= n-m; i++) {
            int j = 0;

            while (j < m && haystack[i + j] == needle[j]) { /* mtlb ki jb tk jneedle me hai aur aur heystack[i+j]  yani suppose l heystack me 2 pe hai aur needle me 0 pe so heaystack[2+0]==needle[0] yes they both match so only increase j*/

                j++;
            }
            if (j == m) { // jab j pura traverse krle needle ko 
                return i;
            }
        }
        return -1;
    }
};