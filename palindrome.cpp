#include <iostream>
using namespace std;
#include <fstream>
#include <cctype>
string file_name;
int len(){
    int loop=0;
    ifstream readfile(file_name.c_str());
    string text;
    getline(readfile,text);
    int a=0;
    a=text.length();
    readfile.close();
    return a;
}

int main(int argc,char *argv[]) {
    int loop=0;
    int b=len(),j=1;
    file_name = argv[1];
    ifstream readfile(file_name );
    string text;
    char arr[b+1];
    char c=' ';
    while(!readfile.eof()){
        if(readfile.is_open()){

            while(readfile.get(c)){
                arr[loop]= c;
                loop++;
            }
            readfile.close();
        }
        else{
            cout<<"cant open file";
        }
    }
    for(int w=0;w<b-1;w++){
        if(isupper(arr[w])){
            arr[w]=arr[w]+32;
        }
    }
    int y=0;
    for(int i=0;i<(b/2);) {
        if(arr[i]== arr[b-j]) {
            j++;
            i++;
            y=i;
        }
        else {
            cout<<"FALSE";
            return 0;
        }
    }
    if(y==(b/2)){
        cout<<"TRUE";
    }


    return 0;
}
