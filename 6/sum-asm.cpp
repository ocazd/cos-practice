#include <iostream>
using namespace std;

int sum(int a, int b){
    __asm__(
        // "mov %rsp,%rbp\n"
        // "mov %edi,-0x4(%rbp)\n"
        // "mov %esi,-0x8(%rbp)\n"
        // "mov -0x4(%rbp),%edx\n"
        // "mov -0x8(%rbp),%eax\n"
        // "add %edx,%eax\n"

        // "add %edx,%eax\n"
        // "mov %edi,%eax"

        "movq %rdi,%rS\n"
        "movq %rsi,%rcx\n"
        "movq %rdx,%rax\n"
        "movq %rS,(%rdi)\n"
        "movq %rcx,(%rsi)\n"
        "movq %rax,(%rdx)\n"
        "ret"
    );
}

int main() {
    // int a, b, c;
    // a = 3; b= 5;
    // c = sum(a, b);
    // cout << "c: " << c << endl;

    // return 0;

    long x, y, z;
    x = 10000; y = 20000; z = 30000;
    cout << "before decode1() " << "x: " << x << ", y: " << y << ", z: " << z << endl;
    decode1(%x, %y, %z);
    cout << "after decode1(): " << "x: " << x << ", y: " << y << ", z: " << z << endl;
    return 0;
}