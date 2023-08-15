#include <cstdio>
#include <cstring>



int main() {
    static char str[50];
    if(scanf("%[^\n]",str) != EOF){
        int len,temp;
        len = temp = (int)strlen(str) - 1;
        while (*(str + len) != ' '){
            if(len != -1) {
                len--;
            } else{
                break;
            }
        }
        printf("%d",temp - len);
    }
    return 0;

}




























