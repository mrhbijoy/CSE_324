#include <bits/stdc++.h>
using namespace std;
int zero_or_more(string s){
    
    int n=s.length();
    if(s[0]!='a'){
        return 0;
    }
    int i=1;
    int flag=0;
   if(n>2){
    while (i<n-2)
    {
        if(s[i]=='b' && s[i+1]=='c'){
            flag=1;
            i=i+2;
        }
        else{
            flag=0;
            break;
        }
    }
    }
    else if (n==3){
        if(s[1]=='d' && s[2]=='e'){
        return 1;
        } }
        
    if(flag==0){
        return 0;
    }
    if(s[n-1]=='e' && s[n-2]=='d'){
        return 1;
    }
    else{
        return 0;
    }

}
int One_or_more(string s){
    int n=s.length();
    if(s[0]!='a'){
        return 0;
    }
    int i=1;
    int flag=0;
    for(int i=1;i<n-2;i++){
        if(s[i]=='b' && s[i+1]=='c'){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==0){
        return 0;
    }
    if(s[n-1]=='e' && s[n-2]=='d'){
        return 1;
    }
    else{
        return 0;
    }
}

int once_or_not_at_all(string s){
    int n=s.length();
    if(s[0]!='a'){
        return 0;
    }
    if((s[1]=='b' && s[2]=='c')and (s[3]=='d' && s[4]=='e')){
        return 1;
    }
    else if(s[1]=='d' && s[2]=='e'){
        return 1;
    }
    else{
        return 0;
    }
}
int character_class(string s){
    int n=s.length();
    int flag=0;
    for(int i=0;i<n;i++){
        if(s[i]>=97 && s[i]<=109){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        return 1;
    }
    else{
        return 0;
    }
}
int n_times(string s, int len){

    int n=s.length();
    if (n!=len){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            return 0;
        }
    }
    return 1;
}
int vowel_check(string s){
    int n=s.length();
    int flag=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            flag=1;
            break;
        }
    }
    if(flag==1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    string s;
    cin>>s;
    //int len; cin>>len; int flag=n_times(s,len);

    //int flag=once_or_not_at_all(s);
    //int flag=character_class(s);
 
    if(flag==1){
        cout<<"valid string"<<endl;
    }
    else{
        cout<<"invalid string"<<endl;
    }
    
}
