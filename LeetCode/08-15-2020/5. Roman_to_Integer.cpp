class Solution {
public:
    int returnValue(char a){
        switch(a){
            case 'I': return 1;     break;
            case 'V': return 5;     break;
            case 'X': return 10;    break;
            case 'L': return 50;    break;
            case 'C': return 100;   break;
            case 'D': return 500;   break;
            case 'M': return 1000;  break;
            default: return 0;
        }
    }
    int romanToInt(string s) {
        int result = 0, i;
        int len = s.length();
        for(i=0; i<len-1; i++){
            if((s[i] == 'I') && ((s[i+1] == 'V') || (s[i+1] == 'X'))){
                result += (returnValue(s[i+1]) - returnValue(s[i]));
                i++;
            }
            else if((s[i] == 'X') && ((s[i+1] == 'L') || (s[i+1] == 'C'))){
                result += (returnValue(s[i+1]) - returnValue(s[i]));
                i++;
            }
            else if((s[i] == 'C') && ((s[i+1] == 'D') || (s[i+1] == 'M'))){
                result += (returnValue(s[i+1]) - returnValue(s[i]));
                i++;
            }
            else{
                result += returnValue(s[i]);
            }
        }
        if((len-i) == 0)
            return result;
        else
            return result+returnValue(s[len-1]);
    }
};
