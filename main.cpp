#include <bits/stdc++.h>
using namespace std;

int main() {
    
   
   string input1;
   string input2;
   
   cin>>input1>>input2;
   
   int H = 0,X = 0;
   
   
   for(int i = 0; i<input1[i] != '\0'; i++){
     X = 1;
     //left shift
     X = X<<input1[i] - 'a';
     H = X|H;
   }
   
    for(int i = 0; i<input2[i] != '\0'; i++){
     X = 1;
     //left shift
     X = X<<input2[i] - 'a';
     if(X&H){
        continue;
     }else{
        cout<<"Not Anagram"<<endl;
        return 0;
     }
   }
   
    cout<<"Anagram"<<endl;
   
   return 0;
}






