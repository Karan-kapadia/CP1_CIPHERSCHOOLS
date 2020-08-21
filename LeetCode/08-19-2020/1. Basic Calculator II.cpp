class Solution {
public:
    int precedence_check(char op){      
        if(op == '*'||op == '/') 
            return 1; 
        return 0; 
    } 
    int calculate(string s) {
        stack <int> numbers;         
        stack <char> operations;       

        for(int i = 0; i<s.length(); i++) { 
            if(s[i] == ' ')      
                continue; 
            
            else if(isdigit(s[i])){       
                int temp = 0; 
                while(i < s.length() && isdigit(s[i]))
                    temp = (temp*10) + (s[i++] - '0');       
                i--;
                numbers.push(temp);       
            } 
            
            else { 
                while(!operations.empty() && precedence_check(operations.top())>= precedence_check(s[i])) { 
                    int n2 = numbers.top(); 
                    numbers.pop(); 
                    int n1 = numbers.top(); 
                    numbers.pop(); 
                    char op = operations.top(); 
                    operations.pop(); 
                    int result;
                    switch(op){
                        case '+' : result = (n1 + n2); break;
                        case '-' : result = (n1 - n2); break;
                        case '*' : result = (n1 * n2); break;
                        case '/' : result = (n1 / n2); break;
                        default : return 0;
                    }
                    numbers.push(result);                
                } 
                operations.push(s[i]); 
            } 
        } 
        
        while(!operations.empty()) {                    
            int n2 = numbers.top(); 
            numbers.pop(); 
            int n1 = numbers.top(); 
            numbers.pop(); 
            char op = operations.top(); 
            operations.pop(); 
            switch(op){
                case '+' : result = (n1 + n2); break;
                case '-' : result = (n1 - n2); break;
                case '*' : result = (n1 * n2); break;
                case '/' : result = (n1 / n2); break;
                default : return 0;
            }
            numbers.push(result);  		
        } 
        return numbers.top();
    }
};
