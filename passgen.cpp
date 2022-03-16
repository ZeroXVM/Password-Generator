#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;
int main(){
    srand(time(NULL));
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@#$%^&*(){}[]|><;";
    char ch[4];
    cout << "Length? Norm 30, Med 50, Extreme 100" << "\n";
    cin.getline(ch,4);
    int length = stoi(ch);
    if(length==0){cout << "Length was not provided." << "\n"; return 0;}
    string result = "";
    for(int i=0; i<length; i++){
        try{
            char chosen = characters.at(rand()% characters.length()+1);
            result=result+chosen;
        } catch(exception){
            i--;
            continue;
        }
    }
    //cout << result << "\n";
    ofstream temp("temp.txt");
    temp << result;
    temp.close();
    FILE* pipe = popen("xclip -selection clipboard ./temp.txt","r");
    if (!pipe){
        cout << "XCLIP not installed." << "\n";
        goto CLOSE;
    }
    CLOSE:int status = pclose(pipe);
    if (status==-1){
        cout << "Error reported by clipboard library. Continuing initial exit sequence." << "\n";
    }
    remove("temp.txt");
    return 0;
}