#include <Windows.h>
using namespace std;
 
void bomb()
{
    while(1)
    { 
        LPVOID ptr = VirtualAlloc(NULL, 300000, MEM_RESERVE, PAGE_READWRITE);
        ptr = VirtualAlloc(ptr, 300000, MEM_COMMIT, PAGE_READWRITE); //commiting memory
        memset(ptr, '0', 300000);
        cout << "Memory is DEAD INSIDE!";
    }
    
}
 
int main() {
    for (int i = 1; i < 100000; ++i)
    {
        bomb();
    }
}
