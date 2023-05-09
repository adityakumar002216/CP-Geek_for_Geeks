string firstRepChar(string s)
{
    //code here.
    string t;
    map<char,int>m;
    for(int i=0;i<s.length();i++){
    m[s[i]]++;
    if(m[s[i]]==2){
    t.push_back(s[i]);
    return t;
    }
    }
    return "-1";
}
