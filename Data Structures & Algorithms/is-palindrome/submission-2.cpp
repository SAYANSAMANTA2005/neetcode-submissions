class Solution {
public:
    bool isPalindrome(string s) {
        string ans,ans2;
        /*
        for  
        */
        for(auto it:s){
           // cout<<it<<" ";
            if(isalnum(it)){
            if(it<='Z'&& it>='A')
            {it='a'+(it-'A');
           //  
           // cout<< it << "  "<<endl; //
        }
           // web , cs fundamental , job e prep , 
            ans+=it;  //                   //                      //  
           }
        }
        //                 //                //
        ans2=ans;// ans
    //    cout<<ans<<" ";  //      //    ans     //
        reverse(ans.begin(),ans.end());
        return ans==ans2;
    }
};
