void _start(void)
{
	asm volatile (
	"mov    $0,%rdi; \
         mov    $60,%eax; \
         syscall;"
	);
}
