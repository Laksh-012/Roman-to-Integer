#include <iostream>
#include <unordered_map>
using namespace std;
    int romanToint(string roman){
        unordered_map<char,int>mp;
        int x = roman.length();
        
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int ans = 0;
        for (int i = 0; i < x; i++)
        {
            if (mp[roman[i]]<mp[roman[i+1]])
            {
                ans -= mp[roman[i]];
        }
            else{
                ans += mp[roman[i]];
                
            }    
        }
        
        return ans;
        
    }



int main(){
    string roman;
    cout<<"Enter roman number in capital: ";
    cin>>roman;

    romanToint(roman);
    cout<<romanToint(roman);

}