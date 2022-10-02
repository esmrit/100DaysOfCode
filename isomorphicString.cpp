bool areIsomorphic(string str1, string str2)
    {
        if(str1.length() != str2.length())
            return false;
        
        unordered_map<char, int> map1, map2;
        unordered_map<char, char> char_map;
        
        char_map[str1[0]] = str2[0];
        
        //maping chars
        for(int i=1; i<str1.size(); i++){
            if(char_map.find(str1[i]) != char_map.end() && char_map[str1[i]] != str2[i])
                return false;
            
            else{
                char_map[str1[i]] = str2[i];
            }
        }
            
        //counting freqency    
        for(int i=0; i<str1.size(); i++)
            map1[str1[i]]++;
            
        for(int i=0; i<str2.size(); i++)
            map2[str2[i]]++;
        
        bool isIsomorphic = true;
        
        //check for freqenecy
        for(int i=0; i<str1.length(); i++){
            if(map1[str1[i]] != map2[str2[i]]){
                isIsomorphic = false;
                break;
            }
        }
        
        return isIsomorphic;
    }
