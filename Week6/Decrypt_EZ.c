#include <stdio.h>
int main() {
    char text[201], result[201];
    int len = 0;
    char wheel[26] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    
    scanf("%[^\n]", text);
    while (text[len] != '\0') {
        len++;
    }
    
    for (int i = 0; i < len; i++) {
        char c = text[i];
        
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            int is_lower = 0;
            if (c >= 'a' && c <= 'z') {
                is_lower = 1;
                c = c - 32;
            }
            
            int index = -1;
            for (int w = 0; w < 26; w++) {
                if (wheel[w] == c) {
                    index = w;
                    break;
                }
            }
            
            int new_index = (index + 5) % 26;   // decrypt = บวก 5 กลับ (ย้อนจาก encrypt ที่ลบ 5)
            char new_char = wheel[new_index];
            
            if (is_lower == 1) {
                new_char = new_char + 32;
            }
            
            result[i] = new_char;
        }
        else {
            result[i] = c;
        }
    }
    
    result[len] = '\0';
    printf("%s", result);
    
    return 0;
}