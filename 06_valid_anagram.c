#include <stdbool.h>
/* LeetCode 242: Valid Anagram | Strings | O(n), 26 counters.
   Assumes lowercase English letters, as in the basic problem constraints. */
bool isAnagram(char* s, char* t) {
    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) count[s[i] - 'a']++;
    for (int i = 0; t[i] != '\0'; i++) count[t[i] - 'a']--;
    for (int i = 0; i < 26; i++) if (count[i] != 0) return false;
    return true;
}
