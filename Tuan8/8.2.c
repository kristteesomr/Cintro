#include <stdio.h>
/* Viết chương trình thay thế các kí tự ‘\’, ‘\t’, ‘\b’ bởi “\\”, “\\t”, “\\b” trong chuỗi nhập vào và in ra màn hình. */
int main(){
    int c, d;
    while ( (c=getchar()) != EOF) { /* getchar lay tu bo dinh ban phim */
        d = 0;
        if (c == '\\') { /* Khong the de la 1 dau \ vi no se anh huong den phan sau */
            putchar('\\'); /* phai 2 lan putchar vi \\ tinh la 1 cai \ */
            putchar('\\');
            d = 1;}
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            d = 1;}
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            d = 1;}
        if (d == 0) putchar(c);        
    }
return 0;
}
/* a \t \b \
a \\t \\b \\ */

/* Ban chat cua bai 8.2:
\t khi nguoi dung bam phim tab
\b khi nguoi dung bam phim backspace xoa lui
\d khi nguoi dung 
\n khi nguoi dung bam phim enter */