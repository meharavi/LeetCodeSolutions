class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int start=0,end=0,itr=0;
        
        while(itr<n){
            while(itr<n && s[itr]!=' '){
                s[end++] = s[itr++];
            }
            if(start<end){
                reverse(s.begin()+start,s.begin()+end);
                if(end==n)break;
                s[end++]=' ';
                start=end;
            }
            itr++;
        }
        // while(s[end]==' '){
        //     s.resize(end);
        //     end--;
        // }
        s.resize(n-(n-end));
        if(s[end-1]==' ')s.resize(end-1);
        return s;
    }
};