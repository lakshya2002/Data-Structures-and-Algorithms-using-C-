   static char toLowerCase(char c)
    {       
        int temp;        
            if(c>='A' && c<='Z')
            {
                temp=c-'A'+'a';
                 return (char)temp;
            }
            else
                return c;
        
    }
    

	public static boolean checkPalindrome(String str) {
	      
	    int start=0;
        int n=str.length();
        int end=n-1;
        int flagStart;
        int flagEnd;
 while(start<=end)
  {
     flagStart=0;
     flagEnd=0;
  if((str.charAt(start)>='a' && str.charAt(start) <= 'z')||(str.charAt(start) >= 'A' && str.charAt(start) <= 'Z')||
    (str.charAt(start)>='0' && str.charAt(start) <= '9'))
        flagStart=1;
     else
         start++;
     
     
  if((str.charAt(end) >= 'a' && str.charAt(end) <= 'z') || (str.charAt(end)>='A' && str.charAt(end) <= 'Z') ||(str.charAt(end)>='0' && str.charAt(end) <= '9'))
               flagEnd=1;
     else
         end- -;
       
     if(flagStart==1 && flagEnd==1 )
     { 
         if(toLowerCase(str.charAt(start))==toLowerCase(str.charAt(end)))
           {  
               start++;
               end- -;
           }
           else
              break;
     } 
     
 }     
     if(start>end)
         return true;
     else 
         return false;
     
	}
}
