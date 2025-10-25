char* mergeAlternately(char* word1, char* word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int maxLen = (len1 > len2) ? len1 : len2;
    
    char* result = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    int k = 0;
    
    for (int i = 0; i < maxLen; i++) {
        if (i < len1) result[k++] = word1[i];
        if (i < len2) result[k++] = word2[i];
    }
    
    result[k] = '\0';
    return result;
}
