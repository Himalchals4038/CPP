#include <bits/stdc++.h>
using namespace std;
string sortSentence(string s){
    stringstream ss(s);
    string word;
    vector<string> tempWords;
    while (ss>>word) tempWords.push_back(word);

    vector<string> sortedWords(tempWords.size());
    for(const string& w : tempWords){
        int index = w.back() - '0';
        sortedWords[index - 1] = w.substr(0, w.length() - 1);
    }

    string ans = "";
    for(int i=0; i<sortedWords.size(); i++){
        ans += sortedWords[i] + (i == sortedWords.size() - 1 ? "" : " ");
    }
    return ans;
}
int main(){
    string s = "is2 sentence4 This1 a3";
    cout<<sortSentence(s)<<endl;
    s = "Myself2 Me1 I4 and3";
    cout<<sortSentence(s)<<endl;
    s = "For1 the2 good3 of4 the5 people6";
    cout<<sortSentence(s)<<endl;
    return 0;
}