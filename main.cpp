#include <iostream>
#include<string.h>

using namespace std;

int main(int argc, char *argv[]) {
    char str[100000];
    long count = 0;
    while(gets(str)){
        long l = strlen(str);
        for(int i = 0; i < l; i++) {
            if(str[i]=='"') {
                count++;
                if (count%2 == 1) cout << "``";
                else cout << "''";
            } else cout << str[i];
        }
        cout << endl;
    }
    return 0;
}