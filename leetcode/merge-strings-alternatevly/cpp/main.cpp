class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int size1 , size2 , maxi, mini;
    string merged;
    size1 = word1.length();
    size2 = word2.length();
    
    if (size1 > size2) {
        maxi = size1;
        mini = size2;
    } else {
        maxi = size2;
        mini = size1;
    }

    for ( int i = 0; i < mini;i++){
        merged += word1[i];
        merged += word2[i];
    }
    string rest;
    if ( size1 == maxi) {
        rest = word1.substr(mini,maxi); 
    }else{
        rest = word2.substr(mini,maxi);
    }

    return merged + rest;
    }
};
