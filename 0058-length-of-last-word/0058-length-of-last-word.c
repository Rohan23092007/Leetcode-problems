int lengthOfLastWord(char* s) {
  int counter = 0;
    int len = strlen(s);
    for (int i = len; i >=0 ; i--)
    {
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0')
        {
            for (int j = i+1;s[j] != '\0' ; j++)
            {
                if (s[j]==' ')
                {
                    break;
                }
                
            counter++;
            }
            break; 
        }
        else if(i==0){
            for (int i = 0; i < len; i++)
            {
                if(s[i]==' '){
                    break;
                }
                counter++;
            }
            
        }
    }  
    return counter;
}
