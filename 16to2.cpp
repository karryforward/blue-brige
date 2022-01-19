#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string str,str2;
    int str3[100001];
    int num;
    int flag;
    for (int i = 0; i < n; ++i) {
        str="";
        cin>>str;
        str2="";
        for (int j = 0; j < str.length(); j++) {
            switch (str[j]) {
                case '0':str2+="0000";break;
                case '1':str2+="0001";break;
                case '2':str2+="0010";break;
                case '3':str2+="0011";break;
                case '4':str2+="0100";break;
                case '5':str2+="0101";break;
                case '6':str2+="0110";break;
                case '7':str2+="0111";break;
                case '8':str2+="1000";break;
                case '9':str2+="1001";break;
                case 'A':str2+="1010";break;
                case 'B':str2+="1011";break;
                case 'C':str2+="1100";break;
                case 'D':str2+="1101";break;
                case 'E':str2+="1110";break;
                case 'F':str2+="1111";break;
                default:break;
            }
            if (str2.length()%3==1)str2="00"+str2;
            if (str2.length()%3==2)str2="0"+str2;
        }
        num=0;
        for (int j = 0; j < str2.length(); ++j) {
                str3[num]=(str2[j]-'0')*4+(str2[j+1]-'0')*2+(str2[j+2]-'0');
                j++;j++;
                num++;
        }
        flag=0;
        for (int k = 0; k < num; ++k) {
            if (str3[k]==0&&flag==0)continue;
            else{
                cout<<str3[k];
                flag=1;
            }
        }
        cout<<endl;
    }

    return 0;
}
