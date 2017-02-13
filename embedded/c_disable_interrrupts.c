//void isr(void)
//{
//    asm {
//    DI; disable interrupts
//    PUSH AF; save registers
//    PUSH BC
//    PUSH DE
//    PUSH HL
//    PUSH IX
//    PUSH IY
//    }
//
//    /* normal C code here */
//    asm {
//    POP IY
//    POP IX
//    POP HL
//    POP DE
//    POP BC
//    POP AF
//    EI; enable interrupts
//    RETI; return from interrupt
//    }
//    }

interrupt void isr(void)
{ /* normal C code here */
};

void isr(void) __attribute__ ((interrupt ("IRQ"));

void isr(void)
{
/* normal C code here */ }

extern "C" int func();
// the definition of func is written in assembly language
asm(".globl func\n\t"
        ".type func, @function\n\t"
        "func:\n\t"
        ".cfi_startproc\n\t"
        "movl $7, %eax\n\t"
        "ret\n\t"
        ".cfi_endproc");

int main()
{
    int n = func();
    // extended inline assembly
    asm ("leal (%0,%0,4),%0"
    : "=r" (n)
    : "0" (n));
    flush();

    // standard inline assembly
    asm ("movq $60, %rax\n\t" // the exit syscall number on Linux
            "movq $2,  %rdi\n\t" // this program returns 2
            "syscall");
}

// http://www.embedded.com/electronics-blogs/break-points/4027634/Disabling-Interrupts