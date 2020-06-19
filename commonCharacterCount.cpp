int commonCharacterCount(std::string s1, std::string s2) {
    int freq1[26] = { 0 }; 
    int freq2[26] = { 0 }; 
   
    int count = 0; 
  
    for (int i = 0; i < s1.size(); i++) 
        freq1[s1[i] - 'a']++; 

    for (int i = 0; i < s2.size(); i++) 
        freq2[s2[i] - 'a']++; 
  
    for (int i = 0; i < 26; i++) 
        count += (min(freq1[i], freq2[i])); 
  
    return count; 
}
